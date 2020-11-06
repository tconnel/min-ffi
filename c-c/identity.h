#ifndef IDENTITY_H
#define IDENTITY_H

#define identity(__type, __value)\
    identity_ ## __type(__value)

#define IDENTITY(__type)\
    extern __type identity_ ## __type(__type)

typedef struct {
    int i;
} identity_test;

IDENTITY(int);
IDENTITY(identity_test);

#endif /* IDENTITY_H */
