#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n;
    char names[1000][20];
    char c[20];
    //char c[20] = {"Hello"};
    do{
        printf("Enter number of students: ");
        scanf("%d",&n);
        getchar();
    }while(n <= 0 || n > 1000);
    for(i=0;i<n;i++){
        printf("Enter name: ");
        gets(names[i]);

    }
    for(i=1;i<=n;i++){
        for(j=0;j<=n;j++){
            if(strcmp(names[j],names[i]) == 1){
            strcpy(c,names[i]);
            strcpy(names[i],names[j]);
            strcpy(names[j],c);
        }
        }

    }
    for(i=0;i<=n;i++){
        printf("%s",names[i]);
        printf("\n");
    }
    return 0;
}
