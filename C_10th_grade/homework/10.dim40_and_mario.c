#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int size = atoi(argv[1]);
	int i,j=0;
	int bottles_prices[size];
	for(i = 2;i<argc;i++){
		bottles_prices[j] = atoi(argv[i]);
		j++;
	}
	int first_bottle = 0,last_bottle = j-1,years=1,sum=0;
	while(first_bottle <= last_bottle){
		if(bottles_prices[first_bottle] <= bottles_prices[last_bottle]){
			sum += bottles_prices[first_bottle] * years;
			years++;
			first_bottle++;
		}else{
			sum += bottles_prices[last_bottle] * years;
			years++;
			last_bottle--;
		}
	}
	printf("sum = %d\n",sum);
	return 0;
}
