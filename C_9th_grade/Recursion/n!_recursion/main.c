#include <stdio.h>
#include <stdlib.h>
int fact1(int);
int fact2(int);
int main()
{
    printf("%d",fact1(5));
    printf("\n%d",fact2(5));
    return 0;
}
int fact1(int n)
    {
        int p = 1,i;
        for(i=1;i<=n;i++)p=p*i;
        return p;
    }
int fact2(int n){
    if(n==0) return 1;
    else return n*fact2(n-1);
}
