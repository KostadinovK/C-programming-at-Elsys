/* is a number divisor of ints in a array*/
#include <stdio.h>

int is_divisor(int[],int);

int main(){
   int a[9];
   int i,n;
   for(i=0;i<=9;i++){
      printf("Enter a[%d]: ",i);
      scanf("%d",a+i);
   }
   do{
      printf("Enter a num: ");
      scanf("%d",&n);
   }while(n==0);
   if(is_divisor(a,n)==1)printf("Yes\n");
   else printf("No\n");
   return 0;
}


int is_divisor(int a[9],int n){
   int i;
   for(i=0;i<=9;i++){
       if (a[i] % n != 0)return 0;
   }
   return 1;
}
