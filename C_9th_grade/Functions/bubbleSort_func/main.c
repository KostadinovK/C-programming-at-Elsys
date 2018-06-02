#include <stdio.h>
#include <stdlib.h>
#define maxm 100
#define maxn 100
void arr_in(int *,int);
void arr_out(int *,int);
void arr_sort(int *,int);
int main()
{
    int a[maxm];
    int b[maxn];
    int i,j,n,m;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxn);
    arr_in(a,n);
    arr_sort(a,n);
    arr_out(a,n);
    do{
        printf("\nEnter m: ");
        scanf("%d",&m);
    }while(m < 0 || m > maxm);
    arr_in(b,m);
    arr_sort(b,m);
    arr_out(b,m);
    return 0;
}
void arr_in(int *pa,int n){
    int i;
    for(i=0;i<n;i++){
        printf("Enter arr[%d]: ",i);
        scanf("%d",pa+i);
    }
}
void arr_sort(int *pa,int n){
    int i,j,c;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(*(pa+j) > *(pa+j+1)){
                c = *(pa+j);
                *(pa+j) = *(pa+j+1);
                *(pa+j+1) = c;
            }
        }
    }
}
void arr_out(int *pa,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",*(pa + i));
    }

}

