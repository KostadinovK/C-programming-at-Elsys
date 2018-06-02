#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxbr 500000
#define maxnum 500000
int main()
{
    int nums[maxbr];
    int i,j,c,n,num,sorted,swaps;
    srand(time(NULL));
    sorted = 0;
    swaps = 0;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    printf("Array: ");
    for(i=0;i < n;i++){
        num = rand() % maxnum+1;
        nums[i] = num;
        printf("%d ",num);
    }
    clock_t start = clock(),diff;
    while(! sorted){
        sorted = 1;
        for(i=0; i < (n-1);i++){
            for(j=0;j < n-i-1;j++){
                if(nums[j] > nums[j+1]){
                    swaps++;
                    c = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = c;
                    sorted = 0;
                }
            }
        }
    }
    diff = clock() - start;
    int msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("\n");
    printf("Sorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }

    printf("\nSwaps: %d",swaps);
    printf("\n%d Seconds,%d milliseconds",msec/1000,msec%1000);
    return 0;
}
/*int main()
{
    int nums[maxbr];
    int i,j,c,n,num,swaps;
    srand(time(NULL));
    swaps = 0;
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    printf("Array: ");
    for(i=0;i < n;i++){
        num = rand() % maxnum+1;
        nums[i] = num;
        printf("%d ",num);
    }
    clock_t start = clock(),diff;
    for(i=0; i < (n-1);i++){
        for(j=0;j < n-i-1;j++){
            if(nums[j] > nums[j+1]){
                swaps++;
                c = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = c;
                }
            }
        }
    diff = clock() - start;
    int msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\nSwaps: %d",swaps);
    printf("\n%d Seconds and %d Milliseconds", msec/1000,msec%1000);
    return 0;
}*/
