#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int random_gen(){
  int g = open("/dev/random", O_RDONLY, 0);
  if(g<0){
    printf("%s\n",strerror(errno));
  }
  int num[1];
  read(g,num,4);
  return num[0];
}
