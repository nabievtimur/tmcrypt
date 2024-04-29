#ifndef TN_TYPES_H_
#define TN_TYPES_H_

typedef unsigned char tn_u8_t;
typedef unsigned short tn_u16_t;

#ifdef X86
typedef unsigned long tn_u32_t;
#else
typedef unsigned int tn_u32_t;
#endif // X86

typedef unsigned long long tn_u64_t;

typedef union tn_u128 {
    tn_u8_t     u8[16];
    tn_u16_t    u16[8];
    tn_u32_t    u32[4];
    tn_u64_t    u64[2];
} tn_u128_t;

typedef union tn_u256 {
    tn_u8_t     u8[32];
    tn_u16_t    u16[16];
    tn_u32_t    u32[8];
    tn_u64_t    u64[4];
} tn_u256_t;

typedef union tn_u512 {
    tn_u8_t     u8[64];
    tn_u16_t    u16[32];
    tn_u32_t    u32[16];
    tn_u64_t    u64[8];
} tn_u512_t;

typedef unsigned long tn_size_t;
typedef unsigned long tn_addr_t;
typedef tn_u64_t tn_flag_t;
typedef tn_u8_t tn_bool_t; 

#define TN_FALSE 0x00
#define NT_TRUE !TN_FALSE

tn_u128_t tn_u128_add(tn_u128_t a, tn_u128_t b);
tn_u128_t tn_u128_sub(tn_u128_t a, tn_u128_t b);

tn_u256_t tn_u256_add(tn_u256_t a, tn_u256_t b);
tn_u256_t tn_u256_sub(tn_u256_t a, tn_u256_t b);

tn_u512_t tn_u512_add(tn_u512_t a, tn_u512_t b);
tn_u512_t tn_u512_sub(tn_u512_t a, tn_u512_t b);

#endif // !TN_TYPES_H_