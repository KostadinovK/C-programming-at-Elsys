//the biggest number in a array with recursion
#include <stdio.h>

int biggest(int[],int,int);

int main(){
	int a[4];
	int  i;
	for(i=0;i<=4;i++){
		printf("Enter a[%d]: ",i );
		scanf("%d",a+i);
}
	printf("%d\n",biggest(a,5,0));
	return 0;
}

int biggest(int a[4],int size, int offset){
	int cur_max;
	cur_max = a[offset];
	if(size - offset == 1){
		return cur_max;
	}
	int other_max = biggest(a,size,offset+1);
	if(cur_max < other_max)
		cur_max = other_max;
	return cur_max;

}
