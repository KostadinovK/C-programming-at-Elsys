#include <stdio.h>

char to_lowercase(char);
char to_uppercase(char);
char invert(char);

int main(){
  char upper_letter = 'K';
  printf("%c\n",to_lowercase(upper_letter));
  char lower_letter = 'k';
  printf("%c\n",to_uppercase(lower_letter));
  printf("%c   %c\n",invert(upper_letter),invert(lower_letter));
  return 0;
}

char to_lowercase(char letter){
  return letter | 32;
}

char to_uppercase(char letter){
  return letter & ~32;
}

char invert(char letter){
  char result = ' ';
  if(letter >= 'A' && letter <= 'Z'){
    result = letter | 32;
  }else if(letter >= 'a' && letter <= 'z'){
    result = letter & ~32;
  }
  return result;
}
