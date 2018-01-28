//convert char to int
#include <stdio.h>

int convert(char);

int main(){
	char c;
	do{
		printf("Enter c: ");
		scanf("%c",&c);
		getchar();
	}while(c < '0' || c > '9');
	printf("%d\n",convert(c));
	return 0;
}

int convert(char c){
	switch(c){
	case '0': return 0;
	case '1': return 1;
	case '2': return 2;
	case '3': return 3;
	case '4': return 4;
	case '5': return 5;
	case '6': return 6;
	case '7': return 7;
	case '8': return 8;
	case '9': return 9;
	}
}
