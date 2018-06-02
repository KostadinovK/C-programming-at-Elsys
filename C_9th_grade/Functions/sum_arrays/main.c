#include <stdio.h>
#include <stdlib.h>
#define maxn 100
void BubbleSort(int *,int);
void sum_arrays(int *,int *,int,int,int *);
int main()
{
    int a[maxn],b[maxn],s[200];
    int i,n,m;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxn);
    for(i=0;i<n;i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",(a+i));
    }
    BubbleSort(a,n);
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    do{
        printf("Enter m: ");
        scanf("%d",&m);
    }while(m<1 || m > maxn);
    for(i=0;i<m;i++){
        printf("Enter b[%d]: ",i);
        scanf("%d",(b+i));
    }
    BubbleSort(b,m);
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    sum_arrays(a,b,n,m,s);
    for(i=0;i<n+m;i++){
        printf("%d ",s[i]);
    }

    return 0;
}
void BubbleSort(int *a,int n){
    int i,j,c;
    for(i=0;i<n-1;i++){
        for(j = 0;j < n-i-1;j++){
            if(*(a+j) > *(a+j+1)){
                c = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = c;
            }
        }
    }
}
void sum_arrays(int *a,int *b,int n,int m,int *s){
        int posa,posb,i;
        posa=posb=0;
        for(i=0;i<n+m;i++){
            if(posa < n && posb < m){
                if(a[posa] < b[posb]){
                    s[i] = a[posa];
                    posa++;
                }else{
                    s[i] = b[posb];
                    posb++;
                }
                //
                }
            else if(posa == n){
                    for(;i<n+m;i++){
                        s[i] = b[posb];
                        posb++;
                    }
            }
            else{
                for(;i < n+m;i++){
                    s[i] = a[posa];
                    posa++;
                }
            }
        }

}



