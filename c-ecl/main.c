#include <stdio.h>
#include <ecl/ecl.h>
extern void init_identity(cl_object);
extern cl_object LC2id_int(cl_object);

int main(int argc, char* argv[]) {
  cl_boot(argc, argv);
  ecl_init_module(NULL, init_identity);
  //cl_object val = LC2id_int(ecl_make_fixnum(4));
  //ecl_make_fixnum(5)
  printf("%ld\n", 1l);
  cl_shutdown();
  return 0;
}
