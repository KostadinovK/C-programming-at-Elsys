#include <stdio.h>
#include <string.h>

int to_integer(char*);
int main(int argc, char **argv){
	int i,sum=0;
	for(i = 1;i<argc;i++){
		sum += to_integer(argv[i]);
	}
	printf("%d\n",sum);
	return 0;
}
int to_integer(char *c){
	int i,j,digit;
	int pow=0,num=0,powered=1;
	int lenght = strlen(c);
	if(lenght == 1){
		num = *(c + 0) - '0';
	}else{
		for(i=lenght-1;i>=0;i--){
		digit = *(c+i) - '0';
			if(pow==0){
				powered = 1;
			}else if(pow == 1){
				powered = 10;
			}else{
				for(j = 1;j < pow;j++){
					powered *= 10;
				}
			}
		
		num += digit * powered;
		powered = 10;
		pow++;
		}

	}
	return num;
	
}