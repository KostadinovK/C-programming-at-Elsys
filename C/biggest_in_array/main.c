/**#include <stdio.h>
#include <stdlib.h>
int biggest(int[],int,int);
int main()
{
    int arr[4];
    int i;
    for(i=0;i<=4;i++){
        printf("Enter arr[%d]: ",i);
        scanf("%d",arr+i);
    }
    printf("%d\n",biggest(arr,5,0));
    return 0;
}
int biggest(int arr[], int size, int offset){
    int cur_max = arr[offset];
    if(size - offset == 1) return cur_max;

    int other_max = biggest(arr,size,offset+1);
    if(other_max > cur_max){
        cur_max = other_max;
    }


    return cur_max;


}
**/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int bricks=0;
    int i,j=0,n;
    do{
        scanf("%d",&n);
    }while(n > 100000 || n < 0);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    //first half
    for(i = n/2;i>=1;i--){
        j = i-1;
        if(arr[i] < arr[j])arr[i] = arr[j];

    }
     for(i = n/2;i>=1;i--){
        j = i-1;
        if(arr[i] < arr[j])arr[i] = arr[j];

    }
    //second half

    for(i=n/2;i<n-1;i++){
        j=i+1;
        if(arr[i] < arr[j])arr[i]=arr[j];
    }
    for(i=n/2;i<n-1;i++){
        j=i+1;
        if(arr[i] < arr[j])arr[i]=arr[j];
    }
    printf("Ready Array: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    for(i=0;i<n;i++){
        bricks = bricks + arr[i];
    }
    printf("\nbricks: %ld",bricks);
    return 0;
}
