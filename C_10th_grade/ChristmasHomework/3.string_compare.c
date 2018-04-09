#include <stdio.h>
#include <string.h>

int string_compare(char *str1, char *str2);
int main(int argc, char **argv){
    char str1[3] = "fat";
    char str2[3] = "cat";
    char str3[7] = "ezeroto";
    char str4[7] = "ezeroto";
    char str5[4] = "camp";
    char str6[4] = "cemp";


    int res = string_compare(str1,str2);
    printf("%d\n",res);
    res = string_compare(str3,str4);
    printf("%d\n",res);
    res = string_compare(str5,str6);
    printf("%d\n",res);
    return 0;
    
}

int string_compare(char *str1, char *str2){   
    int length = strlen(str2);
    
    for (int i=0;i<length;i++){
            
        if (*(str1+i) > *(str2+i)){
            return 1;
        }else if (*(str1+i) < *(str2+i)){ 
            return -1;
        }
    }
    return 0; 
}

