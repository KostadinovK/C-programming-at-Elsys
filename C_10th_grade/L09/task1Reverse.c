#include <stdio.h>
#include <string.h>
void reverse(char *);
int main(){
	char str[10];
	fgets(str,10,stdin);
	int size = strlen(str);
	char str2[size];
	strcpy(str2,str);
	reverse(str2);
	if(strcmp(str,str2) == 0){
		printf("Palindrome\n");
	}else{
		printf("Not!\n");
	}
	return 0;
}
void reverse(char *str){
	int size = strlen(str);
	char str2[size+1];
	int i;
	for(i=0;i<size;i++){
		str2[size-i-1] = str[i];
		
	}
	str2[size] = '\0';
	strcpy(str,str2);
	

}