/**
 * @file tn_key_info.h
 * @author Timur Nabiev (nabievtimurprogrammer@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 * @brief This file define abstract cipher 
 */

#include "tncrypt\tn_defines.h"
#include "tncrypt\tn_types.h"

struct tn_key_info;
typedef tn_key_info tn_key_info_t;

/**
 * @brief 
 * 
 * @param _key_info 
 * @return TN_API 
 */
TN_API tn_size_t tn_key_info_get_min_size(
    _TN_IN const tn_key_info_t* _key_info);

/**
 * @brief 
 * 
 * @param _key_info 
 * @return TN_API 
 */
TN_API tn_size_t tn_key_info_get_max_size(
    _TN_IN const tn_key_info_t* _key_info);
