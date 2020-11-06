#ifndef LIB_C_RUST_H
#define LIB_C_RUST_H

#include <stdint.h>

#define IDENTITY(__type)\
    extern __type identity_ ## __type(__type);

typedef struct {
    int32_t i;
} identity_test;

IDENTITY(int32_t);
IDENTITY(identity_test);

#endif /* LIB_C_RUST_H */
