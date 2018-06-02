#include <stdio.h>
#include <stdlib.h>
void hanoi(int,char,char,char);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}
void hanoi(int n, char from, char third, char to){
    if (n==1)
        printf("\nMove disk %d from %c to %c",n,from,to);
    else{
        hanoi(n-1,from,to,third);
        printf("\nMove disk %d from %c to %c",n,from,to);
        hanoi(n-1,third,from,to);
    }
}
