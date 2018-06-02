#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i,j,no=0;
    printf("Enter string: \n");
    gets(str);
    i=0;
    j=strlen(str)-1;
    while(i < j){
        if(str[i] != str[j]){
            no = 1;
            break;
        }
        i++;
        j--;
    }
    if(no == 1){
        printf("It's not a palindrome!");
    }else{
        printf("It's a palindrome!");
    }
    return 0;
}
