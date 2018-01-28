// how many times n is in m
#include <stdio.h> 

int n_in_m(int, int,int,int);

int main(){
	int n,m;
	printf("Enter m: ");
	scanf("%d",&m);
	printf("Enter n: ");
	scanf("%d",&n);
	printf("%d\n",n_in_m(m,n,0,0));
	return 0;
}

int n_in_m(int m, int n, int count,int a){
	int ost;
	ost = m % n;
	if(a == m || a == m-ost) return count;
	a =a +  n*1;
	count = count + 1;
	return n_in_m(m,n,count,a);



}
