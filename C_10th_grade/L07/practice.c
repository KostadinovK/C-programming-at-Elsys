#include <stdio.h>
void main(){
	int nums[5] = {7,66,55,3,4};
	int i;
	for(i=0;i<5;i++){
		printf("%p\n",*(nums+i));
	}

}
