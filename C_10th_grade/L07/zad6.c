#include <stdio.h>
void get_min_max(int *,int *,int *,int);
int main(){
	int i,n=3,min=1000000,max=-1000000;
	int nums[n];
	for(i=0;i<n;i++){
		scanf("%d",nums+i);
	}
	get_min_max(nums,&min,&max,n);
	printf("max = %d min = %d",max,min);

	return 0;
}
void get_min_max(int *arr, int *min, int *max,int size){
	int i;
	if(size == 0){
		*min = -1;
		*max = -1;
		return;
	}
	for(i=0;i<size;i++){
		if(*(arr+i) > *max){
			*max = *(arr+i);
		}
	}
	for(i=0;i<size;i++){
		if(*(arr+i) < *min){
			*min = *(arr+i);
		}
	}
	
}