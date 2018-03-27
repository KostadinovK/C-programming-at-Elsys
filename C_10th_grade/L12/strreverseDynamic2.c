#include <stdio.h>
#include <stdlib.h>

int main(){
  int size = 0;
  char *mem = malloc(sizeof(char) * 1);
  *mem = getchar();
  getchar();
  while(size < 6){
      size++;
      mem = realloc(mem,size);
      *(mem+size) = getchar();
  }
  for(int i = size;i >= 0;i--){
    printf("%c\n", *(mem+i));
  }

  mem = NULL;
  free(mem);
  return 0;
}
