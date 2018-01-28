#include <stdio.h>
#include <string.h>

int elemt_of_array(int[],int);

int main(){
   int arr[5];
   int i,n;
   do{
      printf("Enter n: ");
      scanf("%d",&n);
   }while(n < 0 || n > 4);
   for(i=0;i<5;i++){
      printf("arr[%d]: ",i);
      scanf("%d",arr+i);
   }
   printf("arr[%d] is: %d\n",n,elemt_of_array(arr,n));
   
   return 0;
}

int elemt_of_array(int arr[5],int n){
   return arr[n];

}
