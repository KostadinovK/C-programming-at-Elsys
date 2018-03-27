#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptr = malloc(sizeof(int) * 10);
  for(int i = 0;i < 10;i++){
    *(ptr + i) = i+1;
    printf("%d ",*(ptr+i));
  }
  ptr = NULL;
  free(ptr);
  return 0;
}
