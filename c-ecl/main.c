#include <stdio.h>
#include <ecl/ecl.h>
extern void init_identity(cl_object);
extern cl_object LC2id_int(cl_object); //NOTE never resolves...

int main(int argc, char* argv[]) {
  cl_boot(argc, argv);
  ecl_init_module(NULL, init_identity);

//   cl_object val = ecl_make_fixnum(4);
//   cl_object squaredval = ecl_read_from_cstring("(* x y");
//   cl_object fresult = cl_funcall(1, LC2id_int, ecl_make_fixnum(5));
//   unsigned int outval = ecl_fixnum(val);

//   cl_object val = ecl_make_fixnum(4);
//   cl_object otherval = cl_funcall(1, (cl_object)LC2id_int, val);

  cl_shutdown();
  return 0;
}
