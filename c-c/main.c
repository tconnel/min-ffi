#include "identity.h"

int main(int argc, char* argv[]) {
    identity_test test = { .i=0 };
    identity_test other = identity(identity_test, test);
    return identity(int, 0);
}
