#include <stdio.h>
#include <ecl/ecl.h>
extern cl_object LC2id_int(cl_object);

int main() {
  printf("%d\n", ecl_callback_0(5));
  return 0;
}
