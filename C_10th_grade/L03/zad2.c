//sboryt na cifrite na n
#include <stdio.h>

int sum(int,int,int);

int main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("%d\n",sum(n,0,0));
	return 0;
}

int sum(int n, int ost,int res){
	printf("ost = %d   res = %d n = %d\n",ost,res,n);
	if(n <= 9){
		res = res + n;
		return res;
	}
	ost = n % 10;
	res = res + ost;
	return sum(n/10,ost,res);

}
