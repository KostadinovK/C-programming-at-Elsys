#include <stdio.h>
//has a m(0-9) in n
int func (int,int);

int main(){
	int m,n;
	printf("Enter n: ");
	scanf("%d",&n);
	do{
		printf("Enter m(0-9): ");
		scanf("%d",&m);
	}while(m < 0 || m > 9);
	printf("m is in n  %d times!\n",func(n,m));
	return 0;
}

int func(int n, int m){
	int count=0,ost;
	while (n > 1){
		ost = n%10;
		if(ost == m){
			count = count+1;
		}
		n = n/10;
	}
	return count;
}
