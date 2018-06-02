#include <stdio.h>
#include <string.h>
#define maxc 100
int StrLenght(char *);
int main()
{
    char str[maxc];
    gets(str);
    printf("lenght = %d",StrLenght(str));
    return 0;
}
int StrLenght(char *str){
    int i;
    for(i=0;str[i] != '\0';i++);
    return i;
}
