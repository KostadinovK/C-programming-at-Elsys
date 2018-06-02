#include <stdio.h>
#include <stdlib.h>
void fib1(int);
int fib2(int);
int main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    fib1(n);
    printf("\nWith recursion: \n");
    for(i=0;i<n;i++){
        printf("%d\n",fib2(i));
    }
    return 0;
}
void fib1(int n){
    int i,a=0,b=1,c;
    printf("%d ",b);
    for(i=0;i<n-1;i++){
        if(n <= 1){
            c = n;
        }
        else{
            c = a+b;
            a = b;
            b = c;
        }
        printf("%d ",c);
    }

}
int fib2(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return fib2(n-1) + fib2(n-2);
    }

    }
