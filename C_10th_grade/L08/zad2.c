#include <stdio.h>
void min_max(int *arr,int size,int *min,int *max);
int main(){
	int arr[4] = {4,2,1,3};
	int min,max;

	min_max(arr,4,&min,&max);
	printf("%d %d\n",min,max);
	return 0;
}

void min_max(int *arr,int size,int *min,int *max){
	*min = arr[0];
	*max = arr[0];
	for(int i = 0;i < size;i++){
		if(*min > arr[i]){
			*min = arr[i];

		}
		if(*max < arr[i]){
			*max = arr[i];
		}
	}

}
