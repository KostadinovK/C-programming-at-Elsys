#include <stdio.h>
#include <string.h>

int main()
{
    char indent[50];
    int i,no = 0;
    printf("Enter the identification: ");
    gets(indent);
    if(indent[0]  < 'A' || (indent[0] > 'Z' && indent[0] < 'a') || indent[0] > 'z'){
        no = 1;
    }else{
        for(i=1;i<strlen(indent);i++){
            if((indent[i] >= '0' && indent[i] <= '9') || (indent[i] >= 'A' && indent[i] <= 'Z') || (indent[i] >= 'a' && indent[i] <= 'z')){
            }else{
                no = 1;
                break;
            }
        }
    }
    if(no==1){
        printf("It is invalid!");
    }else{
        printf("It is valid!");
    }
    return 0;
}
