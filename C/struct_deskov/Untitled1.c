#include<stdio.h>
#include<string.h>

void string(char *,char *,int,int);

void main()
{
    char text[200],search[200],replace[200],l[200],r[200],change[200];
    int i,j,k,m,match=1,found=1;
    printf("Enter text: \n");
    gets(text);
    printf("Search for: ");
    gets(search);
    printf("Replace '%s' with: ",search);
    gets(replace);

    for(i=0;i < strlen(text);i++){
        if(text[i] == search[0]){
            match = 1;
            for(j=1;j < strlen(search);j++){
                i++;
                if(text[i] != search[j]){
                    match = 0;
                    break;
                }
            }

            if(match == 1){
                getstr(l,text,0,i-j);
                getstr(r,text,i+1,strlen(text)-1);
                if(strlen(l) > 0){
                   strcpy(change,l);
                }

                strcat(change,replace);

                if(strlen(r) > 0){
                    strcat(change,r);
                }
                change[100] = '\0';
                strcpy(text,change);
            }
            //i--;
        }
    }
    printf("%s",text);

}

void getstr(char *str1, char *str2,int j, int end){
    int i;
    for(i=0;j<=end;i++)
    {
        str1[i]=str2[j];
        j++;
    }
    str1[i]='\0';
}
