#include <stdio.h>
void replace_number(int *,int,int,int);
int main(){
	int nums[5] = {1,2,3,4,2};
	int i,size = 5;
	int find,replace_with;
	printf("Replace: ");
	scanf("%d\n",&find);
	printf("Replace with: ");
	scanf("%d\n",&replace_with);
	replace_number(nums,size,find,replace_with);
	for(i=0;i<size;i++){
		printf("%d ",nums[i]);

	}
	return 0;
}

void replace_number(int *arr,int size,int to_found,int to_replace_with){
	int i;
	for(i=0;i<size;i++){
		if(arr[i] == to_found){
			arr[i] = to_replace_with;
		}

	}


}