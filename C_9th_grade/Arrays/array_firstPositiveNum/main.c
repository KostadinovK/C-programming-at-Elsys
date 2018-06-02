#include <stdio.h>
#include <stdlib.h>
#define maxn 150
int main()
{
    int a[maxn];
    int n,i,j,pos,sum,first;
    sum = 0;
    pos = 0;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 5 || n > maxn);

    for(i=0;i<n;i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i] > 0){
            first = a[i];
            printf("First: %d\n",first);
            pos = i+1;
            printf("Pos: %d\n",pos);
            break;
        }
        if(first != 0){
            while(pos >= 1){
                sum = sum + a[pos-1];
                pos--;
            }
        }

    }

    printf("\nFirst Positive: %d",first);
    printf("\nSum: %d",sum);
    return 0;
}
