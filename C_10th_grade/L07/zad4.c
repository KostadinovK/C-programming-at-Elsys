#include <stdio.h>
void sums(int *, int,int *);
int main(){
	int n = 4,i,sum=0;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	sums(arr,n,&sum);
	printf(" sum = %d\n",sum);
	return 0;
}

void sums(int *arr, int size, int *sum){
	int i;
	for(i=0;i<size;i++){
		*sum = *sum + *(arr+i);
	}

}