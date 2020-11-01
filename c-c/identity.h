#ifndef IDENTITY_H
#define IDENTITY_H

#define identity(__type, __value)\
    identity_ ## __type(__value)

#define IDENTITY(__type)\
    extern __type identity_ ## __type(__type)

IDENTITY(int);

#endif /* IDENTITY_H */
