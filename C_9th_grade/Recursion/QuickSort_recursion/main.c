
#include <stdio.h>
#define maxn 100
void QuickSort(int *,int,int);
int main(){
    int a[maxn];
    int i,n;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxn);
    for(i=0;i<n;i++){
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    QuickSort(a,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
void QuickSort(int *a,int l,int h){
    int i,j,c,x;
    if(l<h){
        i = l;
        x = l;
        j = h;
        while(i<j){
            while(a[i] <= a[x] && i <= h)
            i++;
            while(a[j] > a[x] && j >= l)
            j--;
            if(i<j){
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
        c = a[j];
        a[j] = a[x];
        a[x] = c;
        QuickSort(a,l,j-1);
        QuickSort(a,j+1,h);

    }
}


