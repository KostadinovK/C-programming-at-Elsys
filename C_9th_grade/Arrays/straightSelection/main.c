#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxbr 500000
int main()
{
    int nums[maxbr],a[5000];
    int i,j,n,c,pos,swap;
    swap=0;
    srand(time(NULL));
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    printf("\nArray: ");
    for(i=0;i<n;i++){

        int num = rand() % maxbr+1;
        nums[i] = num;
        a[i] = num;
        printf("%d ",num);
    }
    printf("\nSecond Array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    clock_t start = clock(),diff;
    for(i=0;i<n;i++){
        pos = i;
        for(j=i+1;j<n;j++){
            if(nums[j] < nums[pos]){
                pos = j;
                swap++;
            }
        }
        c = nums[pos];
        nums[pos] = nums[i];
        nums[i] = c;
    }
    diff = clock() - start;
    int msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\nSwaps: %d ",swap);
    printf("\n%d Seconds, %d milliseconds",msec / 1000,msec % 1000);
    return 0;
}
