#include <stdio.h>
int *find_last(int *,int,int);
int main(){
	int nums [5] = {2,3,4,5,2};
	int size = 5;
	int search;
	printf("Search for: ");
	scanf("%d",&search);
	int *ptr = find_last(nums,size,search);
	printf("Adress of *ptr = %p\n",ptr);
	printf("Value = %d\n",*ptr);
	return 0;
}
int *find_last(int *arr,int size,int search){
	int i;
	for(i = size-1;i >= 0;i--){
		if(arr[i] == search){
			return &arr[i];
		}

	}

	return NULL;
}