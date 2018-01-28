/**#include <stdio.h>
int sqr (int n){
	return n*n;
}
int main(){
	int (*fun_ptr)(int) = sqr;
	printf("%d\n",fun_ptr(5));
}**/

#include <stdio.h>

int main(){
	int a;
	float b;
	void *ptr;
	ptr = &a;
	ptr = &b;

	//casting to float
	*(float*)ptr = 5.4;
	printf("%f\n",b);
	return 0;
}