#include <stdio.h>

int is_even(int);

int main(){
   int n = 42;
   printf("%d: %d\n",n,is_even(n));
   return 0;
}

int is_even(int n){
   return n%2 == 0;
}
