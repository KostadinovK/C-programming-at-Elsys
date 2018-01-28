//fib with recursion
#include <stdio.h>

int fib(int);

int main(){
	int a=30;
	printf("%d\n",fib(a));	
	return 0;
}

int fib(int n){
	if(n==1 || n==2)
		return 1;
	return fib(n-1) + fib(n-2);
	
