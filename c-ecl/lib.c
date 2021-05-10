extern void LC1foo();

#include "stdio.h"

void call_foo() {
  printf("calling LC1foo:\n");
  LC1foo();
}
