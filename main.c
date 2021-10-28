#include <stdio.h>
#include <stdlib.h>
#include "foo.h"
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(){
  int arr[10];
  for(int i=0;i<10;i++){
    arr[i]=random_gen();
  }
  for(int j=0;j<10;j++){
    printf("\trandom %d: %d\n",j,arr[j]);
  }
  int h=open("holder1.txt", O_RDONLY | O_WRONLY, 0644);
  if(h<0){return -10;}
  write(h, arr, 40);
  int arr2[10];
  h=open("holder1.txt", O_RDONLY, 0644);
  if(h<0){return -10;}
  read(h,arr2,40);
  printf("-------\n");
  for(int k=0;k<10;k++){
    printf("\tcopied value %d: %d\n",k,arr2[k]);
  }
  return 0;
}
