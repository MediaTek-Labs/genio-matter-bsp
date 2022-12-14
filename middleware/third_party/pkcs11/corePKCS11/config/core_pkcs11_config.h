/*
 * AWS IoT Device SDK for Embedded C
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/**
 * @file core_pkcs11_config.h
 * @brief PCKS#11 config options.
 */


#ifndef CORE_PKCS11_CONFIG_H_
#define CORE_PKCS11_CONFIG_H_

/**************************************************/
/******* DO NOT CHANGE the following order ********/
/**************************************************/

/* Include logging header files and define logging macros in the following order:
 * 1. Include the header file "logging_levels.h".
 * 2. Define the LIBRARY_LOG_NAME and LIBRARY_LOG_LEVEL macros depending on
 * the logging configuration for PKCS #11.
 * 3. Include the header file "logging_stack.h", if logging is enabled for PKCS #11.
 */

#include "logging_levels.h"

/* Logging configuration for the PKCS #11 library. */
#ifndef LIBRARY_LOG_NAME
    #define LIBRARY_LOG_NAME    "PKCS11"
#endif

#ifndef LIBRARY_LOG_LEVEL
    #define LIBRARY_LOG_LEVEL    LOG_NONE
#endif

#include "logging_stack.h"

/************ End of logging configuration ****************/

#include <stdlib.h>
#include "FreeRTOS.h"

/**
 * @brief Malloc API used by iot_pkcs11.h
 */
#define PKCS11_MALLOC                    pvPortMalloc

/**
 * @brief Free API used by iot_pkcs11.h
 */
#define PKCS11_FREE                      vPortFree

/**
 * @ingroup pkcs11_macros
 * @brief Length of bytes to contain an EC point.
 *
 * This port currently only uses prime256v1, in which the fields are 32 bytes in
 * length. The public EC point is as long as the curve's fields * 2 + 1.
 * so the EC point for this port is (32 * 2) + 1 bytes in length.
 *
 * mbed TLS encodes the length of the point in the first byte of the buffer it
 * receives, so an additional 1 byte in length is added to account for this.
 *
 * In addition to this, an additional 1 byte is added to store information
 * indicating that the point is uncompressed.
 *
 * @note This length needs to be updated if using a different curve.
 *
 * To summarize:
 * 32 points of 2 bytes each + 1 point length byte, 1 length byte, and
 * 1 type (uncompressed) byte
 */
#define pkcs11EC_POINT_LENGTH                 ( ( 32UL * 2UL ) + 1UL + 1UL + 1UL )

/**
 * @brief PKCS #11 maximum key size
 * This should aligned with the platform storage maximum size.
 **/
#define pkcs11OBJECT_MAX_SIZE         (2048)

/*
 * RSAPrivateKey ::= SEQUENCE {
 * version           Version,
 * modulus           INTEGER,  -- n   (256 bytes for RSA-2048)
 * publicExponent    INTEGER,  -- e  (3 or 4 bytes for RSA-2048)
 * privateExponent   INTEGER,  -- d  (about 256 bytes for RSA-2048)
 * prime1            INTEGER,  -- p  (128 bytes for RSA-2048)
 * prime2            INTEGER,  -- q  (128 bytes for RSA-2048)
 * exponent1         INTEGER,  -- d mod (p-1)  (128 bytes for RSA-2048)
 * exponent2         INTEGER,  -- d mod (q-1)  (128 bytes for RSA-2048)
 * coefficient       INTEGER,  -- (inverse of q) mod p  (128 bytes for RSA-2048)
 * otherPrimeInfos   OtherPrimeInfos OPTIONAL
 * }
 * Besides, when encode the key, some ASN tags are also introduced.
 * For RSA-2048, the encoded length should be around 1232  bytes.
 */
#define MAX_PRIVATE_KEY_SIZE    1300

/**
 * @ingroup pkcs11_macros
 * @brief size of a prime256v1 EC private key in bytes, when encoded in DER.
 */
#define pkcs11_PRIVATE_EC_PRIME_256_DER_SIZE    160

/**
 * @ingroup pkcs11_macros
 * @brief size of a prime256v1 EC public key in bytes, when encoded in DER.
 */
#define pkcs11_PUBLIC_EC_PRIME_256_DER_SIZE     100

/**
 * @ingroup pkcs11_macros
 * @brief size of a 2048 bit RSA public key in bytes, when encoded in DER.
 */
#define pkcs11_PUBLIC_RSA_2048_DER_SIZE         300

/**
 * @ingroup pkcs11_macros
 * @brief size of a 2048 bit RSA private key in bytes, in DER encoding.
 */
#define pkcs11_PRIVATE_RSA_2048_DER_SIZE        1200

/**
 * @ingroup pkcs11_macros
 * @brief Max size of an EC public key in bytes, in DER encoding.
 */
#define pkcs11_MAX_EC_PUBLIC_KEY_DER_SIZE       pkcs11_PUBLIC_EC_PRIME_256_DER_SIZE


/**
 * @ingroup pkcs11_macros
 * @brief Max size of an EC private key in bytes, in DER encoding.
 */
#define pkcs11_MAX_EC_PRIVATE_KEY_DER_SIZE    pkcs11_PRIVATE_EC_PRIME_256_DER_SIZE

/**
 * @ingroup pkcs11_macros
 * @brief Max size of a public key.
 * This macro defines the size of a key in bytes, in DER encoding.
 *
 * @note The largest RSA public key is used because EC keys are smaller.
 */
#define pkcs11_MAX_PUBLIC_KEY_DER_SIZE        pkcs11_PUBLIC_RSA_2048_DER_SIZE

/**
 * @ingroup pkcs11_macros
 * @brief Max key length of a key.
 * This macro defines the size of a key in bytes, in DER format.
 *
 * Currently the largest key type supported by this port is a 2048 bit
 * RSA private key.
 *
 * @note The largest RSA private key is used because EC keys are smaller and
 * the RSA public key is smaller.
 */
#define pkcs11_MAX_PRIVATE_KEY_DER_SIZE    pkcs11_PRIVATE_RSA_2048_DER_SIZE

/**
 * @brief PKCS #11 default user PIN.
 *
 * The PKCS #11 standard specifies the presence of a user PIN. That feature is
 * sensible for applications that have an interactive user interface and memory
 * protections. However, since typical microcontroller applications lack one or
 * both of those, the user PIN is assumed to be used herein for interoperability
 * purposes only, and not as a security feature.
 *
 * Note: Do not cast this to a pointer! The library calls sizeof to get the length
 * of this string.
 */
#define configPKCS11_DEFAULT_USER_PIN    "0000"

/**
 * @brief Maximum length (in characters) for a PKCS #11 CKA_LABEL
 * attribute.
 */
#define pkcs11configMAX_LABEL_LENGTH     32

/**
 * @brief Maximum number of token objects that can be stored
 * by the PKCS #11 module.
 */
#define pkcs11configMAX_NUM_OBJECTS      6

/**
 * @brief Maximum number of sessions that can be stored
 * by the PKCS #11 module.
 *
 * @note The windows test port has an abnormally large value in order to have
 * enough sessions to successfully run all the model based PKCS #11 tests.
 */
#define pkcs11configMAX_SESSIONS         250


/**
 * @brief Set to 1 if a PAL destroy object is implemented.
 *
 * If set to 0, no PAL destroy object is implemented, and this functionality
 * is implemented in the common PKCS #11 layer.
 */
#define pkcs11configPAL_DESTROY_SUPPORTED                  0

/**
 * @brief Set to 1 if OTA image verification via PKCS #11 module is supported.
 *
 * If set to 0, OTA code signing certificate is built in via
 * aws_ota_codesigner_certificate.h.
 */
#define pkcs11configOTA_SUPPORTED                          0

/**
 * @brief Set to 1 if PAL supports storage for JITP certificate,
 * code verify certificate, and trusted server root certificate.
 *
 * If set to 0, PAL does not support storage mechanism for these, and
 * they are accessed via headers compiled into the code.
 */
#define pkcs11configJITP_CODEVERIFY_ROOT_CERT_SUPPORTED    0

/**
 * @brief The PKCS #11 label for device private key.
 *
 * Private key for connection to AWS IoT endpoint.  The corresponding
 * public key should be registered with the AWS IoT endpoint.
 */
#define pkcs11configLABEL_DEVICE_PRIVATE_KEY_FOR_TLS       "Device Priv TLS Key"

/**
 * @brief The PKCS #11 label for device public key.
 *
 * The public key corresponding to pkcs11configLABEL_DEVICE_PRIVATE_KEY_FOR_TLS.
 */
#define pkcs11configLABEL_DEVICE_PUBLIC_KEY_FOR_TLS        "Device Pub TLS Key"

/**
 * @brief The PKCS #11 label for the device certificate.
 *
 * Device certificate corresponding to pkcs11configLABEL_DEVICE_PRIVATE_KEY_FOR_TLS.
 */
#define pkcs11configLABEL_DEVICE_CERTIFICATE_FOR_TLS       "Device Cert"

/**
 * @brief The PKCS #11 label for the object to be used for code verification.
 *
 * Used by over-the-air update code to verify an incoming signed image.
 */
#define pkcs11configLABEL_CODE_VERIFICATION_KEY            "Code Verify Key"

/**
 * @brief The PKCS #11 label for Just-In-Time-Provisioning.
 *
 * The certificate corresponding to the issuer of the device certificate
 * (pkcs11configLABEL_DEVICE_CERTIFICATE_FOR_TLS) when using the JITR or
 * JITP flow.
 */
#define pkcs11configLABEL_JITP_CERTIFICATE                 "JITP Cert"

/**
 * @brief The PKCS #11 label for the AWS Trusted Root Certificate.
 *
 * @see aws_default_root_certificates.h
 */
#define pkcs11configLABEL_ROOT_CERTIFICATE                 "Root Cert"

#endif /* _AWS_PKCS11_CONFIG_H_ include guard. */
