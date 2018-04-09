#include <stdio.h>

void adjust_item(int*);
void adjust_arr(int*,int);

int main(){
    int num1 = 3,num2 = 4;
    adjust_item(&num1);
    adjust_item(&num2);
    printf("num1 = %d  num2 = %d\n",num1,num2);

    int nums[4] = {1,2,3,4};
    adjust_arr(nums,4);
    int i;
    for(i = 0;i < 4;i++){
        printf("%d ",nums[i]);

    }
    printf("\n");
    return 0;
}

void adjust_item(int *item){
    if(*item % 2 == 0){
        *item = *item * 2;
    }else{
        *item = *item * 3;
    }
}

void adjust_arr(int *arr, int size){
    int i;
    for(i = 0;i < size;i++){
        adjust_item(arr+i);
    }
}

