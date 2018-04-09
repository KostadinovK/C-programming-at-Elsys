#include<stdio.h>

int swap_bits(int,int,int);

int main() {
    int n,position1,position2;
    scanf("%d",&n);
    scanf("%d",&position1);
    scanf("%d",&position2);
    printf("%d\n",swap_bits(n,position1,position2));

    return 0;
}

int swap_bits(int n, int position1, int position2) {
    unsigned int bit1 =  (n >> (position1-1)) & 1;
    unsigned int bit2 =  (n >> (position2-1)) & 1;
    unsigned int x = (bit1 ^ bit2);

    x = (x << (position1-1)) | (x << (position2-1));
    int res = n ^ x;
    return res;
}

