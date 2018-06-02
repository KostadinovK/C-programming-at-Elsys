#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxbr 200000
#define visEOfArray 38
int main()
{
    int nums[maxbr],nums2[maxbr];
    int i,j,c,n,num,pos,sorted;
    unsigned int swap;
    srand(time(NULL));
    sorted = 0;
    swap = 0;
    i=1;
    printf("                            I. In the best case: ");
    do{
        printf("\nEnter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    if(n <= visEOfArray)
        printf("Array: ");
    for(i=0;i < n;i++){
        nums[i] = i;
        if(n <= visEOfArray){
            printf("%d ",nums[i]);
        }
    }

    printf("\n                               1.Bubble Sort: ");

    clock_t start = clock(),diff;
    for(i=0;!sorted && i<n-1;i++){
        sorted = 1;
        for(j=i+1;j < n;j++){
            if(nums[i] > nums[j]){
                swap++;
                c = nums[j];
                nums[j] = nums[i];
                nums[i] = c;
                sorted = 0;
                }
            }
    }
    diff = clock() - start;
    int msec = diff * 1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    }

    printf("\nSwaps: %d",swap);
    printf("\nTime: %d Seconds,%d milliseconds",msec/1000,msec%1000);


    printf("\n");
    printf("\n");
    printf("\n                               2.Straight Selection:");
    swap=0;
    clock_t start2 = clock(),diff2;
    for(i=0;i<n;i++){
        pos = i;
        for(j = i+1;j<n;j++){
            if(nums[j] < nums[pos]){
                pos = j;
            }
        }
        c = nums[pos];
        nums[pos] = nums[i];
        nums[i] = c;
    }

    diff2 = clock() - start2;
    int msec2 = diff2*1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    }
    printf("\nSwaps: %d",swap);
    printf("\nTime: %d Seconds,%d milliseconds",msec2/1000,msec2%1000);



    printf("\n");
    printf("\n");
    printf("\n                               3.Straight Insertion:");
    swap = 0;
    pos = 0;
    clock_t start3 = clock(),diff3;
    for(i=1;i<n;i++){
        pos = nums[i];
        j = i-1;
        while(pos<nums[j] && j>=0){
            nums[j+1] = nums[j];
            j--;
            swap++;
        }
        nums[j+1] = pos;
    }
    diff3 = clock() - start3;
    int msec3 = diff3 * 1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    }
    printf("\nSwaps: %d",swap);
    printf("\nTime: %d Seconds,%d milliseconds",msec3/1000,msec3%1000);




    printf("\n");
    printf("\n");
    printf("\n                         II.In the worst case:      ");

    do{
        printf("\nEnter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    if(n <= visEOfArray)
        printf("Array: ");
    for(i=0;i < n;i++){
        nums[i] = n-i;
        if(n <= visEOfArray){
            printf("%d ",nums[i]);
        }
    }

    printf("\n                            1.Bubble Sort:  ");
    swap = 0;
    sorted = 0;

     clock_t start4 = clock(),diff4;
    for(i=0;!sorted && i<n-1;i++){
        sorted = 1;
        for(j=i+1;j < n;j++){
            if(nums[i] > nums[j]){
                swap++;
                c = nums[j];
                nums[j] = nums[i];
                nums[i] = c;
                sorted = 0;
                }
            }
    }
    diff4 = clock() - start4;
    int msec4 = diff4 * 1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    }
    if(swap >= 2147483647){
        printf("\nSwaps: Not in range!");
    }else{
        printf("\nSwaps: %d",swap);
}
    printf("\nTime: %d Seconds,%d milliseconds",msec4/1000,msec4%1000);




    printf("\n");
    printf("\n");
    printf("\n                             2.Straight Selection:");
    pos = 0;
    swap=0;
    //restart the Array
    for(i=0;i < n;i++){
        nums[i] = n-i;
    }

    clock_t start5 = clock(),diff5;
    for(i=0;i<n;i++){
        pos = i;
        for(j = i+1;j<n;j++){
            if(nums[j] < nums[pos]){
                pos = j;
                swap++;
            }
        }
        c = nums[pos];
        nums[pos] = nums[i];
        nums[i] = c;
    }

    diff5 = clock() - start5;
    int msec5 = diff5*1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    }
    if(swap >= 2147483647){
        printf("\nSwaps: Not in range!");
    }else{
        printf("\nSwaps: %d",swap);
}
    printf("\nTime: %d Seconds,%d milliseconds",msec5/1000,msec5%1000);




    printf("\n");
    printf("\n");
    printf("\n                           3.Straight Insertion:");

    swap = 0;
    pos = 0;

    for(i=0;i < n;i++){
        nums[i] = n-i;
    }

    clock_t start6 = clock(),diff6;
    for(i=1;i<n;i++){
        pos = nums[i];
        j = i-1;
        while(pos<nums[j] && j>=0){
            nums[j+1] = nums[j];
            j--;
            swap++;
        }
        nums[j+1] = pos;
    }
    diff6 = clock() - start6;
    int msec6 = diff6 * 1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    }
     if(swap >= 2147483647){
        printf("\nSwaps: Not in range!");
    }else{
        printf("\nSwaps: %d",swap);
}
    printf("\nTime: %d Seconds,%d milliseconds",msec6/1000,msec6%1000);



    printf("\n");
    printf("\n");
    printf("\n                      III.With random numbers: ");



    do{
        printf("\nEnter n: ");
        scanf("%d",&n);
    }while(n < 1 || n > maxbr);
    if(n <= visEOfArray)
        printf("Array: ");
    for(i=0;i < n;i++){
        num = rand() % maxbr+1;
        nums[i] = num;
        nums2[i] = num;

        if(n <= visEOfArray){
            printf("%d ",nums[i]);
        }
    }
printf("\n                               1.Bubble Sort: ");

    swap = 0;
    sorted = 0;

     clock_t start7 = clock(),diff7;
    for(i=0;!sorted && i<n-1;i++){
        sorted = 1;
        for(j=i+1;j < n;j++){
            if(nums[i] > nums[j]){
                swap++;
                c = nums[j];
                nums[j] = nums[i];
                nums[i] = c;
                sorted = 0;
                }
            }
    }
    diff7 = clock() - start7;
    int msec7 = diff7 * 1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
        printf("\nSorted Array: ");
        for(i=0;i<n;i++){
            printf("%d ", nums[i]);
        }
    }
    if(swap >= 2147483647){
        printf("\nSwaps: Not in range!");
    }else{
        printf("\nSwaps: %d",swap);
}
    printf("\nTime: %d Seconds,%d milliseconds",msec7/1000,msec7%1000);



    printf("\n");
    printf("\n");
    printf("\n                            2.Straight Selection");


    pos = 0;
    swap=0;

    for(i=0;i<n;i++){
        nums[i] = nums2[i];
    }

    clock_t start8 = clock(),diff8;
    for(i=0;i<n;i++){
        pos = i;
        for(j = i+1;j<n;j++){
            if(nums2[j] < nums2[pos]){
                pos = j;
                swap++;
            }
        }
        c = nums2[pos];
        nums2[pos] = nums2[i];
        nums2[i] = c;
    }

    diff8 = clock() - start8;
    int msec8 = diff8*1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums2[i]);
    }
    }
    if(swap >= 2147483647){
        printf("\nSwaps: Not in range!");
    }else{
        printf("\nSwaps: %d",swap);
}
    printf("\nTime: %d Seconds,%d milliseconds",msec8/1000,msec8%1000);



    printf("\n");
    printf("\n");
    printf("\n                            3.Straight Insertion: ");


    swap = 0;
    pos = 0;

    clock_t start9 = clock(),diff9;
    for(i=1;i<n;i++){
        pos = nums[i];
        j = i-1;
        while(pos<nums[j] && j>=0){
            nums[j+1] = nums[j];
            j--;
            swap++;
        }
        nums[j+1] = pos;
    }
    diff9 = clock() - start9;
    int msec9 = diff9 * 1000 / CLOCKS_PER_SEC;
    if(n <= visEOfArray){
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    }
     if(swap >= 2147483647){
        printf("\nSwaps: Not in range!");
    }else{
        printf("\nSwaps: %d",swap);
}
    printf("\nTime: %d Seconds,%d milliseconds",msec9/1000,msec9%1000);




    return 0;
}

