#include <ecl/ecl.h>
extern void call_foo();
int main(int argc, char* argv[]) {
  cl_boot(argc, argv);
  cl_object val = ecl_make_fixnum(4);
  if( ecl_t_of(val) == t_fixnum ) {
    printf("%ld\n", fix(val));
  }
  cl_shutdown();
  return 0;
}
