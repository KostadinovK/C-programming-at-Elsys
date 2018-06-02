#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxbr 500000
int main()
{
    int nums[maxbr];
    int i,j,n,c,swap;
    swap = 0;
    srand(time(NULL));
    do{
        printf("Enter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    printf("Array: ");
    for(i=0;i<n;i++){
        int num = rand() % maxbr+1;
        nums[i] = num;
        printf("%d ", num);
    }
    clock_t start = clock(),diff;
    for(i=1;i<n;i++){
        c = nums[i];
        j = i-1;
        while(c < nums[j] && j>=0){
            nums[j+1] = nums[j];
            j--;
            swap++;
        }
        nums[j+1] = c;
    }
    diff = clock() - start;
    int msec = diff*1000 / CLOCKS_PER_SEC;
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\nSwaps: %d",swap);
    printf("\n%d Seconds, %d milliseconds", msec/1000, msec%1000);
}
