#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l,h,m,area;
    int paint;
    do{
        printf("Enter l: ");
        scanf("%f",&l);
    }while(l < 0 && l > 1000);
    do{
        printf("Enter h: ");
        scanf("%f",&h);
    }while(h < 0 && h > 1000);
    area = l*h;
    do{
        printf("m for a paint: ");
        scanf("%f",&m);
    }while(m < 0 && m > 20);
    paint = area / m;
    ceil(paint);
    printf("Paints: %d",paint);
    return 0;
}
