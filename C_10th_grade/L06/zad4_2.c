#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	int i,j=0,k,m,swap;
	int nums[argc];
	for(i=1;i<argc-1-1;i=i+2){
		nums[j] = atoi(argv[i]);
		j++;
	}
	printf("Converted: ");
	for(i=0;i<j;i++){
		printf("%d ",nums[i]);
	}

	for(k=0;k<j-1;k++){
		for(m=0;m<j-k-1;m++){
			if (nums[m] > nums[m+1]){
				swap = nums[m];
				nums[m] = nums[m+1];
				nums[m+1] = swap;
			}
		}
	}
	for(k=0;k<j;k++){
		printf("%d ",nums[k]);
	}
	return 0;
}