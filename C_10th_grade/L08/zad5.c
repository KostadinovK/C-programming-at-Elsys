#include <stdio.h>
typedef struct{
        int hasIcing;
        float kcal;

}cake_t;
void add_icing(cake_t*);
int main(){
        cake_t cake;
        cake.hasIcing = 1;
        cake.kcal = 10;
        add_icing(&cake);
        printf("icing: %d\n",cake.hasIcing);
        printf("kcal: %f\n",cake.kcal);
        return 0;
}

void add_icing(cake_t *cake){
        if(cake->hasIcing == 0){
                cake->hasIcing = 1;
                cake->kcal +=1.5;
        }
}

