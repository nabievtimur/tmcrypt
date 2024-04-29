#ifndef TN_MAGMA_H_
#define TN_MAGMA_H_

#include "tncrypt/tn_defines.h"
#include "tncrypt/tn_types.h"

#define TN_CIPHER_MAGMA_BLOCK_SIZE_BITS 64
#define TN_CIPHER_MAGMA_BLOCK_SIZE TN_CIPHER_MAGMA_BLOCK_SIZE_BITS / 8
#define TN_CIPHER_MAGMA_KEY_SIZE_BITS 256
#define TN_CIPHER_MAGMA_KEY_SIZE TN_CIPHER_MAGMA_KEY_SIZE_BITS / 8

/**
 * @brief encrypt one block
 * 
 * @param in    -   plain block
 * @param key   -   key
 * @return cipher block 
 */
TN_API tn_u64_t tn_cipher_magma_encrypt_block(tn_u64_t in, tn_u256_t key);

/**
 * @brief encrypt one block
 * 
 * @param in    -   plain block - TN_CIPHER_MAGMA_BLOCK_SIZE
 * @param key   -   key - TN_CIPHER_MAGMA_KEY_SIZE
 * @param out   -   cipher block - TN_CIPHER_MAGMA_BLOCK_SIZE
 */
TN_API void tn_cipher_magma_encrypt_block_ptr(tn_u8_t* in, tn_u8_t* key, tn_u8_t* out);

/**
 * @brief decrypt one block
 * 
 * @param in    -   plain block
 * @param key   -   key
 * @return cipher block 
 */
TN_API tn_u64_t tn_cipher_magma_decrypt_block(tn_u64_t in, tn_u256_t key);

/**
 * @brief decrypt one block
 * 
 * @param in    -   plain block - TN_CIPHER_MAGMA_BLOCK_SIZE
 * @param key   -   key - TN_CIPHER_MAGMA_KEY_SIZE
 * @param out   -   cipher block - TN_CIPHER_MAGMA_BLOCK_SIZE
 */
TN_API void tn_cipher_magma_decrypt_block_ptr(tn_u8_t* in, tn_u8_t* key, tn_u8_t* out);

#ifdef TN_TEST
void test_magma();
#endif // TN_TEST

#endif // !TN_MAGMA_H_