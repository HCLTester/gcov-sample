/* Test program for coverall report*/
#include <stdio.h>

#include "inst/include/foo.h"

int main(void) {
  printf("Start calling foo() ...\n");
  foo(1);
  foo(2);
  return 0;
}
