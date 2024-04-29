/**
 * @file tn_test.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-04-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "unity.h"
#include "tncrypt/cipher/tn_magma.h"

void setUp(void)
{
    return;
}

void tearDown(void)
{
    return;
}


int main(int argc, char* argv[])
{
    UNITY_BEGIN();

    test_magma();

    return UNITY_END();
}
