#include <stdio.h>
#include <stdlib.h>

int main(){
    float eggs_wanted;
    scanf("%f",&eggs_wanted);

    char c = getchar();
    float eggs_per_hour = 0;
    while(c != '\n'){
        float eggs;
        scanf("%f",&eggs);
        eggs_per_hour += eggs;
        c = getchar();
    }

    printf("%f\n",eggs_wanted / eggs_per_hour);
    return 0;
}
