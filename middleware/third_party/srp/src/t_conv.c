/*
 * Copyright (c) 1997-2007  The Stanford SRP Authentication Project
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY 
 * WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.  
 *
 * IN NO EVENT SHALL STANFORD BE LIABLE FOR ANY SPECIAL, INCIDENTAL,
 * INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND, OR ANY DAMAGES WHATSOEVER
 * RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER OR NOT ADVISED OF
 * THE POSSIBILITY OF DAMAGE, AND ON ANY THEORY OF LIABILITY, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * Redistributions in source or binary form must retain an intact copy
 * of this copyright notice.
 */

/*#define _POSIX_SOURCE*/
#include <stdio.h>
#include "t_defines.h"
#include "srp_cstr.h"

static int
hexDigitToInt(c)
     char c;
{
  if(c >= '0' && c <= '9')
    return c - '0';
  else if(c >= 'a' && c <= 'f')
    return c - 'a' + 10;
  else if(c >= 'A' && c <= 'F')
    return c - 'A' + 10;
  else
    return 0;
}

/*
 * Convert a hex string to a string of bytes; return size of dst
 */
_TYPE( int )
t_fromhex(dst, src)
     char * dst;
     const char * src;
{
  register char *chp = dst;
  register unsigned size = strlen(src);

  /* FIXME: handle whitespace and non-hex digits by setting size and src
     appropriately. */

  if(size % 2 == 1) {
    *chp++ = hexDigitToInt(*src++);
    --size;
  }
  while(size > 0) {
    *chp++ = (hexDigitToInt(*src) << 4) | hexDigitToInt(*(src + 1));
    src += 2;
    size -= 2;
  }
  return chp - dst;
}

/*
 * Convert a string of bytes to their hex representation
 */
_TYPE( char * )
t_tohex(dst, src, size)
     char * dst;
     const char * src;
     unsigned size;
{
   int notleading = 0;

   register char *chp = dst;
   *dst = '\0';
   if (size != 0) do {
      if(notleading || *src != '\0') {
	if(!notleading && (*src & 0xf0) == 0) {
	  sprintf(chp, "%.1X", * (unsigned char *) src);
	  chp += 1;
	}
	else {
	  sprintf(chp, "%.2X", * (unsigned char *) src);
	  chp += 2;
	}
	notleading = 1;
      }
      ++src;
   } while (--size != 0);
   return dst;
}

_TYPE( char * )
t_tohexcstr(dst, src, size)
     cstr * dst;
     const char * src;
     unsigned size;
{
  cstr_set_length(dst, 2 * size + 1);
  return t_tohex(dst->data, src, size);
}

static char b64table[] =
  "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";

/*
 * Convert a base64 string into raw byte array representation.
 */
_TYPE( int )
t_fromb64(dst, src)
     char * dst;
     const char * src;
{
  unsigned char *a;
  char *loc;
  int i, j;
  unsigned int size;

  while(*src && (*src == ' ' || *src == '\t' || *src == '\n'))
      ++src;
  size = strlen(src);

  a = os_malloc((size + 1) * sizeof(unsigned char));
  if(a == (unsigned char *) 0)
    return -1;

  i = 0;
  while(i < size) {
    loc = strchr(b64table, src[i]);
    if(loc == (char *) 0)
      break;
    else
      a[i] = loc - b64table;
    ++i;
  }
  size = i;

  i = size - 1;
  j = size;
  while(1) {
    a[j] = a[i];
    if(--i < 0)
      break;
    a[j] |= (a[i] & 3) << 6;
    --j;
    a[j] = (unsigned char) ((a[i] & 0x3c) >> 2);
    if(--i < 0)
      break;
    a[j] |= (a[i] & 0xf) << 4;
    --j;
    a[j] = (unsigned char) ((a[i] & 0x30) >> 4);
    if(--i < 0)
      break;
    a[j] |= (a[i] << 2);

    a[--j] = 0;
    if(--i < 0)
      break;
  }

  while(a[j] == 0 && j <= size)
    ++j;

  os_memcpy(dst, a + j, size - j + 1);
  os_free(a);
  return size - j + 1;
}

_TYPE( int )
t_cstrfromb64(dst, src)
     cstr * dst;
     const char * src;
{
  int len;
  cstr_set_length(dst, (strlen(src) * 6 + 7) / 8);
  len = t_fromb64(dst->data, src);
  cstr_set_length(dst, len);
  return len;
}

/*
 * Convert a raw byte string into a null-terminated base64 ASCII string.
 */
/*_TYPE( char * )
t_tob64(dst, src, size)
     char * dst;
     const char * src;
     unsigned size;
{
  int c, pos = size % 3;
  unsigned char b0 = 0, b1 = 0, b2 = 0, notleading = 0;
  char *olddst = dst;

  switch(pos) {
  case 1:
    b2 = src[0];
    break;
  case 2:
    b1 = src[0];
    b2 = src[1];
    break;
  }

  while(1) {
    c = (b0 & 0xfc) >> 2;
    if(notleading || c != 0) {
      *dst++ = b64table[c];
      notleading = 1;
    }
    c = ((b0 & 3) << 4) | ((b1 & 0xf0) >> 4);
    if(notleading || c != 0) {
      *dst++ = b64table[c];
      notleading = 1;
    }
    c = ((b1 & 0xf) << 2) | ((b2 & 0xc0) >> 6);
    if(notleading || c != 0) {
      *dst++ = b64table[c];
      notleading = 1;
    }
    c = b2 & 0x3f;
    if(notleading || c != 0) {
      *dst++ = b64table[c];
      notleading = 1;
    }
    if(pos >= size)
      break;
    else {
      b0 = src[pos++];
      b1 = src[pos++];
      b2 = src[pos++];
    }
  }

  *dst++ = '\0';
  return olddst;
}

_TYPE( char * )
t_tob64cstr(dst, src, sz)
     cstr * dst;
     const char * src;
     unsigned int sz;
{
  cstr_set_length(dst, (sz * 8 + 5) / 6 + 1);
  return t_tob64(dst->data, src, sz);
}*/
