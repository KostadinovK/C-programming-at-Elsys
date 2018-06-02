#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int *pa,*pb,*pc;

    pa = &a;
    pb = &b;
    pc = &c;
    printf("Enter a: ");
    scanf("%d",pa);
    printf("\nEnter b: ");
    scanf("%d",pb);
    *pc = *pa;
    *pa = *pb;
    *pb = *pc;
    printf("a = %d b = %d",*pa,*pb);
    return 0;
}
