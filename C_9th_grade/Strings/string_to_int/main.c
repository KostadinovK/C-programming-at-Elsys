#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i=0,n=0,sign=1,no=0;
    printf("Enter a string: ");
    gets(str);
        if(str[0] == '-'){
            sign = -1;
            i = 1;
        }else if(str[0] == '+'){
            i = 1;
        }
        for(;i<=strlen(str)-1;i++){
            if(str[i] >= 48 && str[i] <= 57){
                n = n*10 + (str[i]-'0');
            }
            else{
                no=1;
                break;
            }
        }
        if(sign == -1){
            n = -n;
        }
        if(no == 1){
            printf("Can't!");
        }else{
            printf("%d",n);
        }
    return 0;
}
