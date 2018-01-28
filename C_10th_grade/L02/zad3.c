/*kolko glasni ima w masiw */
#include <stdio.h>
#include <string.h>

int vowel_in_array(char*);

int main(){
   char letters[9];
   int i;
   for(i=0;i<10;i++){
      printf("letters[%d]: ",i);
      scanf("%c",&letters[i]);
      getchar();
   }
   printf("It has %d vowels!",vowel_in_array(letters));
   return 0;
}


int vowel_in_array(char letters[9]){
   int i,count=0;
   for(i=0;i<10;i++){
      if(letters[i] == 'a' || letters[i] == 'e' || letters[i] == 'u' || letters[i] == 'i' || letters[i] == 'o'){
         count = count+1;
         
      }
   }
   return count;

}
