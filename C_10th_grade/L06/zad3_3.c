#include <stdio.h>

int main(){
	int i,n;
	scanf("%d",&n);
	getchar();
	float nums[n];
	float avr=0;
	for(i=0;i<n;i++){
		scanf("%f",nums+i);
		avr = avr + nums[i];
		getchar();
	}
	avr = avr / n;
	printf("Average: %.2f",avr);
	return 0;
}