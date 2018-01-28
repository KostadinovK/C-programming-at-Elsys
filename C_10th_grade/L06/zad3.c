#include <stdio.h>

int main(int argc, char **argv){
	char text[100];
	int i=0;
	char c = getchar();
	while(c != EOF && i<=99){
		text[i] = c;
		c = getchar();
		i++;
	}
	printf("%s",text);
	return 0;
	
}