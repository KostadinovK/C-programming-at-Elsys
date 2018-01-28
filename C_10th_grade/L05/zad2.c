#include <stdio.h>
#include <stdlib.h>
typedef struct{
	float a;
	float b;
}vector;
float lenght(vector);
int main(int argc, char **argv){
	vector v1;
	v1.a = 5;
	v1.b = 15;
	printf("lenght = %1.f",lenght(v1));
	return 0;
}
float lenght(vector v1){
	if (v1.b > v1.a)return v1.b - v1.a;
	else return v1.a - v1.b;

}