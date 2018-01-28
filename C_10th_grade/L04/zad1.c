#include <stdio.h>
 struct point{float x;float y;};
typedef struct point p;
int one_line(p,p,p);
int main(){

	 p p1,p2,p3;
	p1.x = 3;
	p1.y=-3;
	p2.x = 4;
	p2.y = -44;
	p3.x=2;
	p3.y=22;
	printf("%d",one_line(p1,p2,p3));
	return 0;
}

int one_line(p p1,p p2, p p3){
	if(p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y) + p3.x*(p1.y-p2.y) == 0)
	return 1;
	else
		return 0;
}
