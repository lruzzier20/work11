#include <stdio.h>
#include <stdlib.h>
#include "foo.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(){
  printf("%d\n",random_gen());
  return 0;
}
