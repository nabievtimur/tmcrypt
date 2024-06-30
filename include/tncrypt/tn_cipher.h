/**
 * @file tn_cipher.h
 * @author Timur Nabiev (nabievtimurprogrammer@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 * @brief This file define abstract cipher 
 */

#ifndef TN_CIPHER_H_
#define TN_CIPHER_H_

#include "tncrypt\tn_status.h"
#include "tncrypt\tn_types.h"
#include "tncrypt\tn_defines.h"

typedef struct tn_cipher
{
    /**
     * @brief defines block size in bits abstract cipher
     * @param _flags        - for unique additional information
     * @return cipher info (ref tn_cipher_info.h)
     */
    tn_status_t (*constructor)(tn_cipher** _cipher, tn_id _id);
 
    /**
     * @brief defines block size in bits abstract cipher
     * @param _flags        - for unique additional information
     * @return cipher info (ref tn_cipher_info.h)
     */
    tn_status_t (*destructor)(tn_cipher** _cipher);

    /**
     * @brief defines block size in bits abstract cipher
     * @param _flags        - for unique additional information
     * @return cipher info (ref tn_cipher_info.h)
     */
    tn_status_t (*destructor)(tn_cipher** _cipher);

    /**
     * @brief defines block size in bits abstract cipher
     * @param _flags        - for unique additional information
     * @return cipher info (ref tn_cipher_info.h)
     */
    tn_status_t (*destructor)(tn_cipher** _cipher);



    
} tn_cipher_c;


typedef tn_cipher_info_t (*tn_pf_cipher_abstract_get_cipher_info_t)(
    _TN_IN_OPT  tn_flag_t   _flags);

/**
 * @brief defines key size in bits abstract cipher
 * @param _flags        -   for unique additional information
 * @return key size
 */
typedef tn_key_info_t (*tn_pf_cipher_abstract_get_key_info_t)(
    _TN_IN_OPT  tn_flag_t   _flags);

/**
 * @brief encrypt 1 block
 * 
 * @param _in       -   plain text block, size = tn_cipher_abstract_block_size()
 * @param _key      -   key, size = tn_cipher_abstract_key_size()
 * @param _out      -   cipher text block, size = tn_cipher_abstract_block_size()
 * @param _flags    -   for unique additional information
 */
typedef void (*tn_pf_cipher_abstract_encrypt_block_t)(
    _TN_IN      const tn_u8_t*  _in, 
    _TN_IN      const tn_u8_t*  _key,
    _TN_OUT     tn_u8_t*        _out,
    _TN_IN_OPT  tn_flag_t       _flags);

/**
 * @brief decrypt 1 block
 * 
 * @param _in       -   cipher text block, size = tn_cipher_abstract_block_size()
 * @param _key      -   key, size = tn_cipher_abstract_key_size()
 * @param _out      -   plain text block, size = tn_cipher_abstract_block_size()
 * @param _flags    -   for unique additional information
 */
typedef void (*tn_pf_cipher_abstract_decrypt_block_t)(
    _TN_IN      const tn_u8_t*  _in, 
    _TN_IN      const tn_u8_t*  _key,
    _TN_OUT     tn_u8_t*        _out,
    _TN_IN_OPT  tn_flag_t       _flags);

typedef struct tn_cipher_abstract
{
    tn_pf_cipher_abstract_get_cipher_info_t get_block_size;
    tn_pf_cipher_abstract_get_key_info_t    get_key_size;
    tn_pf_cipher_abstract_encrypt_block_t   encrypt_block;
    tn_pf_cipher_abstract_decrypt_block_t   decrypt_block;
} tn_cipher_abstract_t;

/**
 * @brief decrypt 1 block
 * 
 * @param _in       -   cipher text block, size = tn_cipher_abstract_block_size()
 * @param _key      -   key, size = tn_cipher_abstract_key_size()
 * @param _out      -   plain text block, size = tn_cipher_abstract_block_size()
 * @param _flags    -   for unique additional information
 */
typedef void (*tn_pf_cipher_abstract_fill)(
    tn_cipher_abstract_t* _cipher_abstract);

#endif // !TN_CIPHER_H_