#include <stdio.h>
#include <string.h>

int main()
{
    char text[500];
    int i,j,enters=0;
    printf("Enter text: \n");
    gets(text);
    for(i=0;i<strlen(text);i++){
        if(text[i] == ' '){
            enters = enters + 1;
        }else{
            enters = 0;
        }
        if(enters == 2){
            enters = 0;
            for(j=i;j<strlen(text);j++){
                text[j] = text[j+1];
            }
        i = i-2;

        }

    }
    if(text[0] == ' '){
        for(i=0;i<strlen(text);i++){
            text[i] = text[i+1];
        }
    }
    printf("%s\n",text);
    return 0;
}
