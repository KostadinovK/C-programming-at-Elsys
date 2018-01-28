#include <stdio.h>
#include <string.h>
typedef struct{
	int num;
	float money;
}card_t;
typedef struct{
	char name[40];
	card_t *card;
}human_t;
int pay_with(human_t*,float);
int main(){
	card_t card = {1232,1000};
	int isPaymentPossible;
	human_t human = {"Kosta",&card};
	isPaymentPossible = pay_with(&human,400);
	if(isPaymentPossible == 1){
		printf("New balance: %.2f\n",human.card->money);
	}else{
		printf("Not enough money\n");
	}
	return 0;
}
int pay_with(human_t *human,float cost){
	printf("money = %f\n",human->card->money);
	if(human->card->money >= cost){
		human->card->money = human->card->money - cost;
		return 1;
	}else{
		return 0;
	}
}