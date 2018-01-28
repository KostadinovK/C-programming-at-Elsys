#include <stdio.h>
#include <string.h>
int palindrome(char[]);
int main(int argc, char **argv){
	int i,answer;
	for(i=1;i<argc;i++){
		answer = palindrome(argv[i]);
		printf("%d ",answer);
	}
	return 0;
}

int palindrome(char str[100]){
	int i=0,yes=1,j=strlen(str)-1;
	while(i<=j){
		if(str[i] != str[j]){
			yes = 0;
			break;
		}
		i++;
		j--;
	}
	if(yes == 0)return 0;
	else return 1;

}