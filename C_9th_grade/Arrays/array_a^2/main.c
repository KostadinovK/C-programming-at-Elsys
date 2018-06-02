#include <stdio.h>
#include <stdlib.h>
#define maxn 36
int main()
{
    int a[maxn],a2[maxn];
    int i,n,b,j,c;

    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 5 || n > maxn);

    for(i=0;i<n;i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    c = 0;
    for(i=0;i<n;i++){
        b = 1;
        for(j=0;j<60;j++){
            if(a[i] == b){
                a2[c] = a[i];
                c++;
                break;
            }

            b = b*2;
        }
    }
    printf("\nArray: ");
    for(i=0;i<c;i++){
        printf("%d ",a2[i]);
    }
    return 0;
}
