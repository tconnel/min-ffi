#include <stdio.h>
#include <ecl/ecl.h>
extern void init_identity(cl_object);
extern cl_object LC2id_int(cl_object); //NOTE never resolves...

int main(int argc, char* argv[]) {
  cl_boot(argc, argv);
  ecl_init_module(NULL, init_identity);
  cl_object val = ecl_make_fixnum(4);
  cl_object outval = LC2id_int(val);
  cl_shutdown();
  return 0;
}
