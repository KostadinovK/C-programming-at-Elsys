//the smallest element in an array
#include <stdio.h>

int smallest(int[]);

int main(){
    int a[9];
    int i;
    for(i=0;i<=9;i++){
	printf("a[%d]: ",i);
	scanf("%d",a+i);
    }
    printf("Min: %d\n",smallest(a));
    return 0;
}

int smallest(int a[9]){
    int i,min;
    min = a[0];
    for(i=0;i<=9;i++){
       if(a[i] <= min){
    	min = a[i];
       }
    }
    return min;
}
