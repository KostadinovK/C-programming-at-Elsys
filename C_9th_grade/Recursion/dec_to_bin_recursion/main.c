#include <stdio.h>
#include <stdlib.h>
#define maxn 100000000
int Transfer(int);
int main()
{
    int num,bin;
    do{
        printf("Enter num: ");
        scanf("%d",&num);
    }while(num < 1 || num > 1000);
    printf("%d",Transfer(num));
    return 0;
}
int Transfer(int n){
    if(n == 0)
        return 0;
    else{
        return (n%2 + 10*Transfer(n/2));
    }
    }


