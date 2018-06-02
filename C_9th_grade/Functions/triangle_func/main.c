#include <stdio.h>
#include <stdlib.h>
void fig(int,char);
int main()
{
    fig(5,'+');
    fig(5,'-');
    return 0;
}
void fig(int n,char c){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%2c",c);
        }
        printf("\n");
    }
}
