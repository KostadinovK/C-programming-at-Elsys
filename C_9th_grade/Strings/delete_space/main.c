#include <stdio.h>
#include <string.h>

int main()
{
    char text[500];
    int i,j;
    printf("Enter text: \n");
    gets(text);
    for(i=0;i<strlen(text);i++){
        if(text[i] == ' '){
            for(j=i;j<strlen(text);j++){
               text[j]=text[j+1];
        }
        i--;
    }
    }
    printf("%s",text);
    return 0;
}
