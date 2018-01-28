#include <stdio.h>
typedef struct{
	int hasIcing;
	float kcal;
}cake_t;
void add_icing(cake_t*);
void for_each(cake_t*,int,void(add)(cake_t*));
int main(){
	cake_t cakes[3];
	int i;
	cakes[0].hasIcing = 0;
	cakes[1].hasIcing = 0;
	cakes[2].hasIcing = 0;
	cakes[0].kcal = 10;
        cakes[1].kcal = 10;
	cakes[2].kcal = 10;
	void(*ptr)(cake_t*) = add_icing;
	for_each(cakes,3,ptr);
	for(i = 0;i<3;i++){
		printf("kcal = %f hasIcing = %d\n",cakes[i].kcal,cakes[i].hasIcing);
	}
	return 0;
}

void add_icing(cake_t *cake){
	if(cake->hasIcing == 0){
		cake->hasIcing = 1;
		cake->kcal += 1.5;
	}

}

void for_each(cake_t *cakes,int size,void(*add)(cake_t*)){
	int i;
	for(i = 0;i<size;i++){
		add(cakes+i);
	}

}
