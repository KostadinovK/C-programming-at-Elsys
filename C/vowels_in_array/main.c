#include <stdio.h>
#include <stdlib.h>
int vowels_in_array(char[]);
int main()
{
    int i;
    char l[9];
    for(i=0;i<=9;i++){
        printf("l[%d]: ",i);
        scanf("%c",l+i);
        getchar();
    }
    printf("It has %d vowels: ",vowels_in_array(l));
    return 0;
}

int vowels_in_array(char l[9]){
   int i,count=0;
   for(i=0;i<=9;i++){
       if(l[i] == 'a' || l[i] == 'u' || l[i] == 'e' || l[i] == 'o' || l[i] == 'i'){
        count = count+1;
       }
   }
   return count;
}
