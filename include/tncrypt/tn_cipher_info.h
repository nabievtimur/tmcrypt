
#include "tncrypt\tn_defines.h"
#include "tncrypt\tn_types.h"

struct tn_cipher_info;
typedef tn_cipher_info tn_cipher_info_t;

/**
 * @brief 
 * 
 * @param _cipher_info 
 * @return tn_size_t 
 */
tn_size_t tn_cipher_info_get_block_size(
    _TN_IN const tn_cipher_info_t* _cipher_info);