/**
 * @file tn_cipher.h
 * @author Timur Nabiev (nabievtimurprogrammer@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 * @brief This file define abstract cipher 
 */

#define TN_STATUS_CODE_OK               = 0x00000000
#define TN_STATUS_CODE(NUMBER)          = (0x00000001 << (NUMBER))
#define TN_STATUS_ERROR_CODE(NUMBER)    = (0x80000000 & (0x00000001 << (NUMBER)))

typedef enum tn_status
{
    TN_STATUS_OK                    TN_STATUS_CODE_OK,
    TN_STATUS_ERROR                 TN_STATUS_ERROR_CODE(0),
    TN_STATUS_BAD_CONSTRUCTOR       TN_STATUS_ERROR_CODE(1),
} tn_status_t;
