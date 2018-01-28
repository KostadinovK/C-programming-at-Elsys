#include <stdio.h>
int print_sequence(int *,int *);
int main(){
	int start=1,end=10,count;
	count = print_sequence(&start,&end);
	printf("count = %d\n",count);

	return 0;
}
int print_sequence(int *start, int *end){
	int i,counter=0;
	for(i=(*start)-1;i<*end;i++){
		printf("%d",*(start)+i);
		counter++;
	}
	return counter;

}