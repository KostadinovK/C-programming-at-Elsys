#include <stdio.h>

int fib(int);

int main(){
   int m=0,i,n;
   do{
      printf("Enter a num: ");
      scanf("%d",&n);
   }while(n<0);
   for(i=1;i<=n;i++){
      printf("%d\n",fib(m));
      m++;
   }
   return 0;
}

int fib(int n){
   if(n==0)return 0;
else if(n==1)return 1;
else return(fib(n-1)+fib(n-2));

}
