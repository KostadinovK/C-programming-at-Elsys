#include <stdio.h>
#include <string.h>

int main(){
  char* input = "AFEmEAAG BDmDm";
  char chords[10000];
  int i,j=0;
  for(i = 0; input[i] != '\0';i++){
    if(input[i] != 32){
      chords[j] = input[i];
      j++;
    }
  }
  int size = 0;
  for(i = 0;chords[i] != '\0';i++){
    size++;
  }

  for(i = 0; i < size;i++){
    if(i + 1 < size && chords[i+1] == 'm'){
      printf("%c%c\n",chords[i],chords[i+1]);
      i++;
    }else{
      printf("%c\n",chords[i]);
    }
  }
  return 0;
}
