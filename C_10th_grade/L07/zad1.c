#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	int i;
	int n = atoi(argv[1]);
	int nums[n];
	for(i=0;i<n;i++){
		scanf("%d",nums+i);
	}
	for(i=0;i<n;i++){
		printf("%d",*(nums+i));
	}
	return 0;
}
