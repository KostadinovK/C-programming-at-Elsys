#include <stdio.h>
#include <string.h>
/* my code
int is_vowel(char);
int is_consonant(char);

int main(){
   char c;
   c = getchar();
   if(is_vowel(c)==1)printf("It is a vowel!\n");
   else printf("it isn't!\n");
   if(is_consonant(c)==1)printf("It is a consonant!\n");
   else printf("It isn't!\n");
   return 0;
}

int is_vowel(char c){
   if(c=='a' || c=='e' || c=='u' || c=='o'|| c=='i')return 1;
   else return 0;

}

int is_consonant(char c){
   char c[4] = "aeoui";
   int i;
   for (i=0;i<5;i++){
      if(c == c[i])return 0;
   }
   return 1;
}
*/

int is_vowel(char);
int is_consonant(char);

int main(){
   char str[] = "qwertyui";
   for(int i = 0;i< strlen(str);i++){
      printf("%c: %d%d ",str[i],is_vowel(str[i]),is_consonant(str[i]));
   }
   
   return 0;
}

int is_vowel(char c){
   if (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i'){
      return 1;
   }
   return 0;
}

int is_consonant(char c){
   if (c >= 'a' && c <= 'z'){
      return !is_vowel(c);
  }
}
