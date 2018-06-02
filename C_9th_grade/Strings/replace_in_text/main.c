#include <stdio.h>
#include <string.h>

int main()
{
    char text[500],sword[20],rword[20],str[100][20];
    int word=0,letter=0,i,k;
    printf("Enter text: \n");
    gets(text);
    printf("Enter the word to be replaced: ");
    gets(sword);
    printf("Replace '%s' with: ",sword);
    gets(rword);

    for(k=0;k<strlen(text);k++){
        if(text[k] != ' '){
            str[word][letter] = text[k];
            letter++;
        }else{
            str[word][letter] = '\0';
            word++;
            letter = 0;
        }
    }
    str[word][letter] = '\0';
    for(i=0;i<=word;i++){
        if(strcmp(str[i],sword)==0){
            strcpy(str[i],rword);
        }
            printf("%s ",str[i]);
    }
    getch();
    return 0;
}
