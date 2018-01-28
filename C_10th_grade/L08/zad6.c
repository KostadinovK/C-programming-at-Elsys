#include <stdio.h>
typedef struct{
        int hasIcing;
        float kcal;

}cake_t;
void add_icing(cake_t*);
void for_each_cake(cake_t *,int,void(*add)(cake_t*));
int main(){
        cake_t cake[3];
        int size = 3;
        cake[0].hasIcing = 1;
        cake[0].kcal = 10;
        cake[1].hasIcing = 0;
        cake[1].kcal = 5;
        cake[2].hasIcing = 0;
        cake[2].kcal = 20;
        int i;
        void (*ptr)(cake_t *) = add_icing;
        for_each_cake(cake,size,ptr);
        for(i=0;i<size;i++){
                printf("icing: %d\n",cake[i].hasIcing);
                printf("kcal: %f\n",cake[i].kcal);
        }
        
        return 0;
}

void add_icing(cake_t *cake){
        if(cake->hasIcing == 0){
                cake->hasIcing = 1;
                cake->kcal +=1.5;
        }
}

void for_each_cake(cake_t *cake,int size,void(*add)(cake_t*)){
        int i;
        for(i=0;i<size;i++){
                add(&cake[i]);
        }

}