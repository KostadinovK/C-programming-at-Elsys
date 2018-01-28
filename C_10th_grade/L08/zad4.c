#include <stdio.h>
void print_element(int);
void for_each(int *,int size,int (*print)(int));
int main(){
	int nums[5] = {1,2,3,4,5};
	int size = 5;
	int (*ptr)(int) = print_element;
	for_each(nums,size,ptr);
	return 0;
}
void print_element(int element){
	printf("%d ",element);
}

void for_each(int *arr,int size,int (*print)(int)){
	int i;
	for(i=0;i<size;i++){
		print(arr[i]);
	}

}