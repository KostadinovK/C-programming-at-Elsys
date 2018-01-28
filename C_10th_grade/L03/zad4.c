//a na stepen n with recursion
#include <stdio.h>

int stepen(int,int);

int main(){
	int a,n;
	do{
		printf("Enter a: ");
		scanf("%d",&a);
	}while(a==0);
	do{
		printf("Enter n: ");
		scanf("%d",&n);
	}while(n==0);
	printf("%d\n",stepen(a,n));
	return 0;

}

int stepen(int a,int n){
	if(n == 0)
		return 1;
	return a * stepen(a,n-1);

}
