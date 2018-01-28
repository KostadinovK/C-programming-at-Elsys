#include <stdio.h>
#include <stdlib.h>
void swap(int*,int*);
int main(int argc, char **argv){
	int a = 1;
	int b = 3;
	swap(&a,&b);
	printf("a = %d b = %d",a,b);
	return 0;
}

void swap(int *a,int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;

}