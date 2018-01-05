#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int i,k,l,r,m,n;

    int answer=-1,found=0;
    do{
        scanf("%li",&n);
    }while(n < 0 || n > 1000000000);
    do{
        scanf("%li",&k);
    }while(k<0 || k > 100000000);

    l=0;
    found=0;
    r=n-1;
    m = (r+l)/2;
    while(r-l >= 1){
        if(k == (long int) (pow((double)m,1.3)+ 3*pow((double)m ,0.7) + 9*pow((double) m,0.3))){
            found = 1;
            break;
        }else{
            if(k > ((long int) (pow((double)m,1.3)+ 3*pow((double)m ,0.7) + 9*pow((double) m,0.3)))){
               printf("m = %d\n",(long int) (pow((double)m,1.3)+ 3*pow((double)m ,0.7) + 9*pow((double) m,0.3)));
                printf("k>x\n");
                l = m+1;
                m = (r+l)/2;
            }else{
                printf("K<x");
                r = m-1;
                m = (r+l)/2;
            }
        }
    }
    if(found == 1)printf("%li",m);
    else{
    printf("not found");
    printf("%d",answer);
    }
    return 0;
}
