#include <stdio.h>
typedef struct prawa {
	int A[1];
	int B[1];

}prawa;
float slope(struct prawa);
int main(){
	int i;
	 prawa p1;
	for(i=0;i<2;i++){
		printf("p1.A[%d]: ",i);
		scanf("%d",p1.A + i);
		
		printf("p1.B[%d]: ",i);
		scanf("%d",p1.B + i);

	}
	printf("\nslope = %f",slope(p1));
	return 0;

}
float slope(prawa p1){
	float m;
	printf("p1.B[0] = %d",p1.B[0]);
	m = (p1.B[1] - p1.A[1])/(p1.B[0]-p1.A[0]);
	return m;

}
