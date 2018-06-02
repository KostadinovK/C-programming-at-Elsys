#include <stdio.h>
#include <stdlib.h>
#define maxbr 20
int main()
{
    int nums[maxbr];
    int i,j,x,n,pos,found;
    pos = 0;
    found = 0;

    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    for(i=0;i<n;i++){
        printf("Enter nums[%d]: ",i);
        scanf("%d",&nums[i]);
    }
    printf("The unsorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",nums[i]);
    }

    for(i=1;i<n;i++){
        pos = nums[i];
        j = i - 1;
        while(pos < nums[j] && j >= 0){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = pos;
    }

    printf("\nThe sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",nums[i]);
    }
    printf("\nEnter x: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(x==nums[i]){
            found = 1;
            break;
        }
        if(x < nums[i]) break;
    }
    if(found==1){
        printf("True!");
    }else{
        printf("False!");
    }
    return 0;
}
