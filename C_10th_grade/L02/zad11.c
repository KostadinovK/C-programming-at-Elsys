//math operations
#include <stdio.h>

float operation(float,char,float);

int main(){
	float x,y;
	char c;
	printf("Enter x: ");
	scanf("%f",&x);
	getchar();
	printf("Enter a operation(+,-,/,*): ");
	scanf("%c",&c);
	if(c=='/'){
 		do{
			printf("Enter y: ");
			scanf("%f",&y);
		}while(y==0);
	}else{
		printf("Enter y: ");
		scanf("%f",&y);
	}
	printf("Result: %.2f\n",operation(x,c,y));
	return 0;
}

float operation(float x,char c,float y){
	switch(c){
	case '+': return x+y;
	case '-': return x-y;
	case '/': return x/y;
	case '*': return x*y;
	}


}
