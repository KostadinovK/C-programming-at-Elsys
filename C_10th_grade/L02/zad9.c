//search in an array
#include <stdio.h>

int search(int[],int);

int main(){
	int a[9];
	int i,x;
	for(i=0;i<=9;i++){
		printf("Enter a[%d]: ",i);
		scanf("%d",a+i);
	}
	printf("Enter x: ");
	scanf("%d",&x);
	printf("%d\n",search(a,x));
	return 0;
}

int search(int a[9], int x){
	int i;
	for(i=0;i<=9;i++){
		if(x == a[i])return i;
	}
	return -1;
}
