#ifndef IDENTITY_H
#define IDENTITY_H

#include <stdint.h>

#define identity(__type, __value)\
    identity_ ## __type(__value)

#define IDENTITY(__type)\
    extern __type identity_ ## __type(__type)

IDENTITY(int);
IDENTITY(int32_t);

#endif /* IDENTITY_H */
