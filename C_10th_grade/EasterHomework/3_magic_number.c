#include <stdio.h>
#include <stdlib.h>

long int find_t(long int,long int);
long int power(int,long int);
int get_num_digits(long int);

int main(int argc, char** argv){

    char c = 's';
    while(c != '\n'){
        long int n;
        scanf("%ld",&n);
        c = getchar();
        long int k;
        scanf("%ld",&k);
        long int t = find_t(n,k);
        printf("t = %ld\n",t);
        c = getchar();

    }

    return 0;
}

long int find_t(long int n, long int k){
    int digits = get_num_digits(n);
    long int m = n;
    long int sum = 0;
    while(m >= 1){
        int digit = m % 10;
        sum += power(digit,k+digits-1);
        m/=10;
        digits--;

    }
    //because of the unclear task explanation and nothing said for t
    // t will be -1 when it is negative or it isn't a int(is float)

    if(sum / n == (int) sum / n){
        return sum/n;
    }else if(n <= 0 || sum <= 0){
        return -1;
    }else{
        return -1;
    }

}

int get_num_digits(long int n){
    int digits = 0;
    while(n >= 1){
        digits++;
        n/=10;
    }
    return digits;

}

long int power(int num1,long int num2){
    long int res = num1;
    for(int i = 1;i < num2;i++){
        res = res*num1;
    }

    return res;
}
