#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	int i,sum=0,err=0;
	for(i=1;i<argc;i++){
		if(argv[i][0] >= '0' && argv[i][0] <= '9'){
			sum = sum + atoi(argv[i]);
		}else{
			printf("Error!");
			err = 1;
		}
	}
	if (err == 0)printf("sum = %d",sum);
	
	return 0;
}