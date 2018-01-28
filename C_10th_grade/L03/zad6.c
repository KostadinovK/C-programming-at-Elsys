//is a string a palindrome
#include <stdio.h>
#include <string.h>

int palindrome(char[],int,int);

int main(){
	char str[100];
	int len;
	printf("Enter a string: ");
	gets(str);
	len = strlen(str)-1;
	printf("%d\n",palindrome(str,0,len));
	return 0;
}

int palindrome(char str[], int i,int j){
	if(i==j || j<i)return 1;
	if(str[i] == str[j])return palindrome(str,i+1,j-1);
	else
		return 0;


}
