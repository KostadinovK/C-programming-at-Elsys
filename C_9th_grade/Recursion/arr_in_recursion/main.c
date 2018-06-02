
#include <stdio.h>
#include <stdlib.h>
#define maxn 100
void input(int *,int);
int main()
{
    int a[maxn];
    int n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxn);
    input(a,n);
    return 0;
}
void input(int *a,int n){
    if(n==0){
        return 0;
    }else{
        printf("Enter a number: ");
        scanf("%d",a);
        printf("%d\n",*a);
        input(a+1,n-1);
    }
}
