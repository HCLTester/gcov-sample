#include <stdio.h>
//#include "../../../inst/include/foo.h"
#include "/home/rishi/CODE-COVERAGE/sample-coverall/gcov-sample/inst/include/foo.h"

void foo(int num) {
  if (num == 1) {
    printf("when num is equal to 1...\n");
  } else if (num == 2) {
    printf("when num is equal to 2...\n");
  } else {
    printf("when num is equal to %d...\n", num);
  }
}
