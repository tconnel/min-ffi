#include "identity.h"
#include <stdio.h>

#define IDENTITY_BODY(__type)\
    __type identity_ ## __type(__type x) { return x; }

IDENTITY_BODY(int)
IDENTITY_BODY(int32_t);
IDENTITY_BODY(identity_test);

void foo() {
    printf("hello foo\n");
}
