#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int isMarried;
    int sallary;
}human_t;
void raise_salary(human_t*);
int main()
{
    human_t human;
    human.isMarried = 1;
    human.sallary = 100;
    raise_salary(&human);
    printf("isMaried = %d sallary = %d\n",human.isMarried,human.sallary);
    return 0;
}
void raise_salary(human_t* human){
    if(human->isMarried == 1){
        human->sallary = human->sallary + 25;
    }else{
        human->sallary = human->sallary + (human->sallary/50);
    }

}
