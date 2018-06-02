#include <stdio.h>
#include <stdlib.h>
#define maxbr 20

int main()
{
    int nums[maxbr];
    int i,n,x,found;
    found = 0;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);

    for(i=0;i<n;i++){
        printf("Enter nums[%d]: ",i);
        scanf("%d",&nums[i]);
    }
    printf("Enter x: ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if (x == nums[i]){
            found = 1;
            break;
        }

    }
    if(found == 1){
        printf("True!");
    }else{
        printf("False!");
    }

    return 0;
}
