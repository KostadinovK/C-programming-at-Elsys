#include <stdio.h>

int main(int argc, char **argv){
	int i,j,n,counter=0;
	char c;
	scanf("%d",&n);
	getchar();
	char letters[n];
	for(i=0;i<n;i++){
		c = getchar();
		letters[i] = c;
		getchar();
	}
	char vowels[6] = {'a','o','e','i','u','y'};
	
	for(i=0;i<n;i++){
		for(j=0;j<6;j++){
			if(letters[i] == vowels[j])counter = counter + 1;

		}
	}
	printf("Counter  = %d",counter);

	return 0;
}