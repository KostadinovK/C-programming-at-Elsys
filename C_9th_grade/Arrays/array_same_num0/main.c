#include <stdio.h>
#include <stdlib.h>
#define maxn 50
int main()
{
    int a[maxn];
    int n,podred,i;

    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 5 || n > maxn);

    for(i=0;i<n;i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++){
        if(a[i-1] == 0){
            podred = 1;
            if(a[i] == 0){
                podred = 2;
                break;
            }
        }

    }
    if(podred == 2){
        printf("Yes!");
    }else{
        printf("No!");
    }
    return 0;
}
