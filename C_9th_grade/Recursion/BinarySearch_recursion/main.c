#include <stdio.h>
#include <stdlib.h>
#define maxn 1000
int BinarySearch(int *,int,int,int);
int main()
{
    int a[maxn];
    int i,n,x,m,l,r,k;
    l=0;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxn);
    r = n-1;
    for(i=0;i<n;i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter x: ");
    scanf("%d",&x);
    m = BinarySearch(a,0,n-1,x);
    if(m=0){
        printf("Not found");
    }else{
        printf("Found");
    }
}
int BinarySearch(int *a, int l, int r, int x){
    int k;
    k = (l+r)/2;
    if (l > r){
        return 0;
    }
    if (a[k] == x){
        return 1;
    }
    else if (a[k] > x)
    {
        return BinarySearch(a,l,k - 1, x);
    }
    else if (a[k] < x)
    {
        return BinarySearch(a,k + 1, r, x);
    }
}
