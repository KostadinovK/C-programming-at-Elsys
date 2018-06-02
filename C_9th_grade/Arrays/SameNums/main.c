#include <stdio.h>
#include <stdlib.h>
#define maxbr 100
int main()
{
    int nums[maxbr];
    int i,k,n,podred,done;
    podred = 1;
    done = 0;
    do{
        printf("Enter N: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    do{
        printf("Enter k: ");
        scanf("%d",&k);
    }while(k < 1 || k > n);

    for(i=0;i < n;i++){
            printf("Enter n[%d]: ",i+1);
            scanf("%d",&nums[i]);
        }
    for(i=0;i<n;i++){
        if(nums[i] == nums[i+1]){
            podred++;
        }
        else{
            podred = 1;
        }
        if(podred >= k){
            done++;
        }
        }

    printf("%d",done);
    return 0;
}
