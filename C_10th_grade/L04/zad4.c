#include <stdio.h>
typedef struct rect_t{
	int left;
	int top;
	int right;
	int bottom;
}rect;

int contains(rect,rect);
struct rect unions(rect,rect);

int main(){
	rect r1,r2,r3;
	r1.left = 100;
	r1.top = 200;
	r1.right = 100;
	r1.bottom = 200;

	r2.left = 50;
	r2.top = 100;
	r2.right = 50;
	r2.bottom = 100;

	if(contains(r1,r2) == 1)printf("Yes\n");
	else printf("No\n");
	r3 = rect unions(r1,r2);
	printf("%d %d %d %d",r3.left,r3.top,r3.right,r3.bottom);
	return 0;

}

int contains(rect r1, rect r2){
	if(r1.top >= r2.top && r1.left >= r2.left)return 1;
	else return 0;
}

struct rect unions(rect r1, rect r2){
	unions.top = r1.top+r2.top;
	unions.bottom = r1.bottom+r2.bottom;
	unions.right = r1.right+r2.right;
	unions.left = r1.left + r2.left;
	return unions;
}
