#include <stdio.h>
#include <stdlib.h>
#define maxbr 40
int main()
{
    int nums[maxbr];
    int i,j,n,l,r,k,pos,found,x;

    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n <= 1 || n > maxbr);

    for (i=0;i<n;i++){
        printf("Enter nums[%d]: ",i);
        scanf("%d", &nums[i]);
    }

    for(i=1;i<n;i++){
        pos = nums[i];
        j = i-1;
        while(pos < nums[j] && j >= 0){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = pos;
    }
    printf("\nArray: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }

    printf("\nEnter x: ");
    scanf("%d",&x);
    l=0;
    found = 0;
    r = n-1;
    k = (l+r)/2;
    while(l<=r){
        if(x == nums[k]){
            found = 1;
            break;
        }else{
            if(x > nums[k]){
                l = k+1;
                k = (l+r)/2;
            }else{
                r = k-1;
                k = (l+r)/2;
            }
        }
    }
    if(found == 1){
        printf("True!");
    }else{
        printf("False!");
    }
    return 0;
}
