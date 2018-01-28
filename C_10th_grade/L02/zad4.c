#include <stdio.h>
#include <string.h>
/*is a number divisor*/
int is_divisor(int,int);

int main(){
   int a,b;
   do{
      printf("Enter a: ");
      scanf("%d",&a);
      
   }while(a==0);
   do{
      printf("Enter b: ");
      scanf("%d",&b);
   }while(b==0);
   if(is_divisor(a,b)==1)printf("Yes, b is a divisor of a!\n");
   else printf("No,b isn't a divisor of a!\n");
   return 0;
}

int is_divisor(int x,int y){
    if(x % y == 0){
       return 1;
    }else{
       return 0;
    }
   
}


