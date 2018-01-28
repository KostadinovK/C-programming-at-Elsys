#include <stdio.h>
typedef struct{
	double grams;
	double mililitters;
}coffee_shot_t;
int is_espresso(coffee_shot_t);
int main(){
	coffee_shot_t coffee = {25,200};
	int isEspresso = is_espresso(coffee);
	printf("%d",isEspresso);
	return 0;
}
int is_espresso(coffee_shot_t coffee){
	if(coffee.mililitters <= 30 && coffee.grams >= 6.5){
		return 1;
	}
	return 0;
}