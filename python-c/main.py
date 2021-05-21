#!/usr/bin/env python3
import cffi
ffi = cffi.FFI()

ffi.cdef("""
    int identity_int(int);
""")

ffi.set_source\
  ( "_identity"
  , """
    #include "identity.h"
    """
  , include_dirs = ['.']
  , library_dirs = ['./lib']
  , libraries = ['identity']
  )

if __name__ == '__main__':
    ffi.compile(verbose=True)
