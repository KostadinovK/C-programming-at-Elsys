#include <stdio.h>
#include <string.h>
typedef struct card_t{
	char strenght;
	char paint;

}card;

typedef struct player_t{
	char name[30];
	int wins;
	int loses;
	card cards[26];

}player;
char strenghts[13] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};

char paints[4] = {'C','D','S','H'};
card fight(card,card);
int main(){
	card c1,c2,c3;
	player p1,p2;
	int i;
	c1.strenght = 'J';
	c1.paint = 'S';
	c2.strenght = '5';
	c2.paint ='S';
	c3 = fight(c1,c2);
	printf("%c %c",c3.strenght,c3.paint);

	strcpy(p1.name,"Player 1");
	strcpy(p2.name,"Player 2");
	p1.wins = 0;
	p1.loses = 0;
	p2.wins = 0;
	p2.loses = 0;
	for(i=0;i<26;i++){
		printf("Enter a card: \n");
		printf("Strenght: ");
		scanf("%c",p1.cards[i].strenght);
		getchar();
		printf("Paint: ");
		scanf("%c",p1.cards[i].paint);
	}
	for(i=0;i<26;i++){
		printf("%c %c",p1.cards[i].strenght,p1.cards[i].paint);
	}
	return 0;
}

card fight(card c1, card c2){
	int str1=0,str2=0,paint1,paint2,i;
	for(i=0;i<13;i++){
		if(c1.strenght == strenghts[i])str1 = i;
		if(c2.strenght == strenghts[i])str2 = i;
	}
	for(i=0;i<4;i++){
		if(c1.paint == paints[i])paint1 = i;
		if(c2.paint == paints[i])paint2 = i;
	}
	if(str1 > str2)return c1;
	else if(str2 > str1)return c2;
	else{
		if(paint1 > paint2 || paint1 == paint2)return c1;
		else return c2;
	}


}
