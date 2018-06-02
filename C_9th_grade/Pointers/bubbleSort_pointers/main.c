#include <stdio.h>
#include <stdlib.h>
#define maxn 100
int main()
{
    int a[maxn];
    int n,i,j,c,sorted;
    int *pn,*pi,*pj,*pc,*psorted;
    pn = &n;pi = &i;pj = &j;pc = &c;psorted = &sorted;
    *psorted = 0;
    *pc = 0;
    do{
        printf("Enter n: ");
        scanf("%d",pn);
    }while(*pn < 1 || *pn > maxn);

    for(*pi = 0;*pi < *pn;(*pi)++){
        printf("Enter a[%d]: ",*pi);
        scanf("%d",a+i);
    }

    for(*pi = 0;*pi<(*pn) - 1 && *psorted == 0;(*pi)++){
        *psorted = 1;
        for(*pj = (*pi)+1;*pj<*pn;(*pj)++){
            if(*(a+i) > *(a+j)){
                *pc = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = *pc;
                *psorted = 0;
            }
        }
    }

    for(*pi = 0;*pi < *pn;(*pi)++){
        printf("%d ",*(a+*pi));
    }
    return 0;
}
