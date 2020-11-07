#ifndef IDENTITY_HPP
#define IDENTITY_HPP

extern "C" {
#include "identity.h"
}

struct identity_test_cpp : public identity_test {
    identity_test_cpp(int i): identity_test{ .i=i, } {}
};

template<class T>
T cpp_identity(T x) {
    return x;
}

#endif /* IDENTITY_HPP */
