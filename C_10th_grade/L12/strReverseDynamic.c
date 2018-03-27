#include <stdio.h>
#include <stdlib.h>

int main(){
  int size;
  printf("String size: ");
  scanf("%d",&size);
  char *mem = malloc(size * sizeof(char));
  int i;
  for(i = 0;i <= size;i++){
    scanf("%c",mem+i);

  }
  for(i = size;i >= 0;i--){
    printf("%c",*(mem+i));
  }
  printf("\n");
  mem = NULL;
  free(mem);
  return 0;
}
