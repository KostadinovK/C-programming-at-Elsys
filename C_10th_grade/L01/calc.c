#include <stdio.h>

int add(int,int);
int multi(int,int);
int stepen (int,int);
 

int main(){
   int a,b,n,x;
   printf("Enter a: ");
   scanf("%d",&a);
   printf("Enter b: ");
   scanf("%d",&b);
   printf("+: The result is: %d\n",add(a,b));
   printf("*: The result is: %d\n",multi(a,b));
   printf("Enter x: ");
   scanf("%d",&x);
   printf("Enter n: ");
   scanf("%d",&n);
   printf("The result is:%d\n ",stepen(x,n));
   return 0;
}

int add(int x,int y){
   return x+y;
}

int multi(int x,int y){
   return x*y;
}

int stepen(int x,int n){
   int m,res;
   m=n;
   if(n > 0){
      while(m >= 0){
	res = x*x;
	m--;
      }
      return res;
   }else if(n==0){
     return 1;
   }
}
