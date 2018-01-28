//factorial of n
//n = (n-1)*(n-2)*(n-3)....
//fac(0) = 1
#include <stdio.h>

int fac(int);

int main(){
	int a = 5;
	printf("%d\n",fac(a));
	return 0;
}

int fac(int n){
	if(n==0)
		return 1;

	return n * fac(n-1);

}
