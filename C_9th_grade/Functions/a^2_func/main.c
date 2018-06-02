#include <stdio.h>
#include <stdlib.h>
void change(int *,int *);
int main()
{
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    change(&x,&y);
    printf("x=%d y=%d",x,y);
    return 0;
}
void change(int *pa,int *pb){
    int c;
    c = *pa;
    *pa = *pb;
    *pb = c;
}
