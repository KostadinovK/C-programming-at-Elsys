#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265
typedef struct{
	int x;
	int y;
	float rad;
}circle;
float lenght(circle);
float area(circle);
void coordinate_sys(circle);
int main(int argc, char **argv){
	circle c1;
	c1.x = 5;
	c1.y = 4;
	c1.rad = 0;
	printf("Lenght: %.2f\n",lenght(c1));
	printf("Area: %.2f\n",area(c1));
	coordinate_sys(c1);
	return 0;
}

float lenght(circle c1){
	return pi * c1.rad * 2;
}

float area(circle c1){
	return pi*c1.rad*c1.rad;

}

void coordinate_sys(circle c){

	if(c.rad == 0){
		if(c.x >= 0 && c.y>=0)printf("First\n");
		if(c.x > 0 && c.y<0);printf("Fourth\n");
		if(c.x < 0 && c.y > 0);printf("Second\n");
		if(c.x<0 && c.y < 0) printf("Third\n");
	}

}