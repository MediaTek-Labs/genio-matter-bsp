/* $OpenBSD: evp_aead.c,v 1.4 2014/06/12 15:49:29 deraadt Exp $ */
/*
 * Copyright (c) 2014, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <limits.h>
#include <string.h>

#include <evp.h>
#include "os.h"
//#include <openssl/evp.h>
//#include <openssl/err.h>

//#include "evp_locl.h"

#define DEBUG_CHACHA20 0
size_t
EVP_AEAD_key_length(const EVP_AEAD *aead)
{
	return aead->key_len;
}

size_t
EVP_AEAD_nonce_length(const EVP_AEAD *aead)
{
	return aead->nonce_len;
}

size_t
EVP_AEAD_max_overhead(const EVP_AEAD *aead)
{
	return aead->overhead;
}

size_t
EVP_AEAD_max_tag_len(const EVP_AEAD *aead)
{
	return aead->max_tag_len;
}

int
EVP_AEAD_CTX_init(EVP_AEAD_CTX *ctx, const EVP_AEAD *aead,
    const unsigned char *key, size_t key_len, size_t tag_len)
{
	ctx->aead = aead;
	if (key_len != aead->key_len) {
		//EVPerr(EVP_F_EVP_AEAD_CTX_INIT, EVP_R_UNSUPPORTED_KEY_SIZE);
                #if DEBUG_CHACHA20
		printf("[EVP_AEAD_CTX_init]: Error - Unsupported Key Size!\n");
                #endif
		return 0;
	}
	return aead->init(ctx, key, key_len, tag_len);
}

void
EVP_AEAD_CTX_cleanup(EVP_AEAD_CTX *ctx)
{
	if (ctx->aead == NULL)
		return;
	ctx->aead->cleanup(ctx);
	ctx->aead = NULL;
}

/* check_alias returns 0 if out points within the buffer determined by in
 * and in_len and 1 otherwise.
 *
 * When processing, there's only an issue if out points within in[:in_len]
 * and isn't equal to in. If that's the case then writing the output will
 * stomp input that hasn't been read yet.
 *
 * This function checks for that case. */
static int
check_alias(const unsigned char *in, size_t in_len, const unsigned char *out)
{
	if (out <= in)
		return 1;
	if (in + in_len <= out)
		return 1;
	return 0;
}

int
EVP_AEAD_CTX_seal(const EVP_AEAD_CTX *ctx, unsigned char *out, size_t *out_len,
    size_t max_out_len, const unsigned char *nonce, size_t nonce_len,
    const unsigned char *in, size_t in_len, const unsigned char *ad,
    size_t ad_len)
{
	size_t possible_out_len = in_len + ctx->aead->overhead;

	/* Overflow. */
	if (possible_out_len < in_len) {
		//EVPerr(EVP_F_AEAD_CTX_SEAL, EVP_R_TOO_LARGE);
                #if DEBUG_CHACHA20
		printf("[EVP_AEAD_CTX_SEAL]:Error - Input Length is too large!\n");
                #endif
		goto error;
	}

	if (!check_alias(in, in_len, out)) {
		//EVPerr(EVP_F_AEAD_CTX_SEAL, EVP_R_OUTPUT_ALIASES_INPUT);
                #if DEBUG_CHACHA20
		printf("[EVP_AEAD_CTX_SEAL]:Error - Output aliases error!\n");
                #endif
		goto error;
	}

	if (ctx->aead->seal(ctx, out, out_len, max_out_len, nonce, nonce_len,
	    in, in_len, ad, ad_len)) {
		return 1;
	}

error:
	/* In the event of an error, clear the output buffer so that a caller
	 * that doesn't check the return value doesn't send raw data. */
	os_memset(out, 0, max_out_len);
	*out_len = 0;
	return 0;
}

int
EVP_AEAD_CTX_open(const EVP_AEAD_CTX *ctx, unsigned char *out, size_t *out_len,
    size_t max_out_len, const unsigned char *nonce, size_t nonce_len,
    const unsigned char *in, size_t in_len, const unsigned char *ad,
    size_t ad_len)
{
	if (!check_alias(in, in_len, out)) {
		//EVPerr(EVP_F_AEAD_CTX_OPEN, EVP_R_OUTPUT_ALIASES_INPUT);
                #if DEBUG_CHACHA20
		printf("[EVP_F_AEAD_CTX_OPEN]:Error - Output aliases error!\n");
                #endif
		goto error;
	}

	if (ctx->aead->open(ctx, out, out_len, max_out_len, nonce, nonce_len,
	    in, in_len, ad, ad_len)) {
		return 1;
	}

error:
	/* In the event of an error, clear the output buffer so that a caller
	 * that doesn't check the return value doesn't try and process bad
	 * data. */
	os_memset(out, 0, max_out_len);
	*out_len = 0;
	return 0;
}
