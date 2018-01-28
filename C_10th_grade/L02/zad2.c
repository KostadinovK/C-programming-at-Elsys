#include <stdio.h>
#include <string.h>

int new_value(int[],int,int);

int main(){
   int arr[9];
   int i,j,n;
   for(j=0;j<10;j++){
      printf("arr[%d]: ",j);
      scanf("%d",arr+j);
   }
   do{
      printf("Enter an index: ");
      scanf("%d",&i);
   }while(i<0 || i > 9);
   printf("Enter n: ");
   scanf("%d",&n);
   printf("arr[%d] = %d\n",i,new_value(arr,i,n));
   for(j=0;j<10;j++){
      printf("arr[%d] = %d",j,arr[j]);
   }
   return 0;
}

int new_value(int arr[9],int i,int n){
   arr[i] = n;
   return n;

}
