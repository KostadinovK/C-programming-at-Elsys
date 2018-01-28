#include <stdio.h>
#include <stdlib.h>
void rotl(int*,int*,int*);
int main(int argc, char **argv){
	int a=1,b=2,c=3;
	rotl(&a,&b,&c);
	printf("a = %d b = %d c = %d",a,b,c);
	return 0;
}
void rotl(int* a,int* b,int* c){
	int swap = 0;
	swap = *a;
	*a = *b;
	*b = *c;
	*c = swap;
}