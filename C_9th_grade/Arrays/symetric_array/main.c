#include <stdio.h>
#include <stdlib.h>
#define maxn 120
int main()
{
    int a[maxn];
    int n,i,no,back;

    no = 0;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 5 || n > maxn);

    for(i=0;i<n;i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    back = n-1;
    for(i=0;i<n;i++){
        if(a[i] != a[back]){
            no = 1;
            break;
        }
        back--;
        if(i == n/2)
            printf("Yes!");
    }
    if(no == 1)
        printf("No!");
    return 0;
}
