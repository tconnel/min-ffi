//extern int L1identity_id_int(int); //NOTE: not stable
//extern int LC2_id_int(int);

#include <stdio.h>
#include <ecl/ecl.h>

int main() {
  cl_object val = ecl_make_fixnum(4);
  printf("%ld\n", ecl_fixnum(val));
  //printf("%i\n", ecl_callback_0(4));
  return 0;
}
