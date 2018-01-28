#include <stdio.h>
typedef struct{
	int hasIcing;
	float kcal;
}cake_t;
void add_icing(cake_t*);
int main(int argc, char **argv){
   cake_t cake;
   cake.hasIcing = 0;
   cake.kcal = 10;
   add_icing(&cake);
   printf ("hasIcing = %d  kcal = %f",cake.hasIcing,cake.kcal);
   return 0;
}

void add_icing(cake_t *cake){
	if(cake->hasIcing == 0){
		cake->hasIcing = 1;
		cake->kcal += 1.5;
	}


}
