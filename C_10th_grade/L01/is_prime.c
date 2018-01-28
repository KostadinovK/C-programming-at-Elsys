#include <stdio.h>

int is_prime(int);

int main(){
   int n,m;
   printf("Enter n: ");
   scanf("%d",&n);
   m = is_prime(n);
   if(m==1)printf("%d is a prime number!\n",n);
   else printf("%d is not a prime num!\n",n);
   return 0;
}

int is_prime(int n){
  for(int i=2;i<n;i++){
     if(n % i == 0)return 0;
  }
  return 1;

}
