#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char s[80];
    int ch;
    printf("              Menu:\n");
    printf("----------------------------------\n");
    printf("\n1.student_class.c\n");
    printf("2.search_and_replace.c\n");
    printf("3.unused_spaces.c\n");
    do{
        printf("Choice: ");
        scanf("%d",&ch);
    }while(ch < 1 || ch > 3);
    if(ch==1){
        if(f = fopen("E:\\C\\student_class\\main.c","r")){
            while(!feof(f)){
                if(fgets(s,80,f)){
                    printf("%s",s);
                }
            }
            fclose(f);
        }else{
            printf("Error!");
        }
    }else if(ch==2){
        if(f = fopen("E:\\C\\search&replace\\main.c","r")){
            while(!feof(f)){
                if(fgets(s,80,f)){
                    printf("%s",s);
                }
            }
                fclose(f);
        }else{
            printf("Error!");
        }
    }else{
        if(f=fopen("E:\\C\\unused_spaces\\main.c","r")){
            while(!feof(f)){
                if(fgets(s,80,f)){
                    printf("%s",s);
                }
            }
                fclose(f);
        }else{
            printf("Error!");
        }
    }
    return 0;
}
