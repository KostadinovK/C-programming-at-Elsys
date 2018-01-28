//the biggest divider of two numbers
#include <stdio.h>

int divider(int,int,int);

int main(){
	int n,m;
	do{
		printf("Enter n: ");
		scanf("%d",&n);
	
	}while(n < 2 && n > -1);
	do{
		printf("Enter m: ");
		scanf("%d",&m);

	}while(m < 2 && m > -1);
	printf("%d\n",divider(n,m,2));


	return 0;
}

int divider(int n,int m, int div){
	int a;
	if(n>m)a=m;
	else a=n;
	if(div > a)return 0;
	if(n % div == 0 && m % div ==0)return div;
	else
		return divider(n,m,div+1); 


}
