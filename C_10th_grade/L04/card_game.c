#include <stdio.h>
#include <string.h>
typedef struct{
	char strenght;
	char paint;

}card;

typedef struct{
	char name[30];
	int wins;
	int loses;
	card cards[9];

}player;
char strenghts[13] = {'2','3','4','5','6','7','8','9','T','J','Q','K','A'};

char paints[4] = {'C','D','H','S'}; 
int fight(card,card);
void battle(player,player);
int main(){
	card c1,c2,c3;
	player p1,p2;
	int i;
	c1.strenght = 'J';
	c1.paint = 'S';
	c2.strenght = '5';
	c2.paint ='S';
	

	strcpy(p1.name,"Player 1");
	strcpy(p2.name,"Player 2");
	p1.wins = 0;
	p1.loses = 0;
	p2.wins = 0;
	p2.loses = 0;
	printf("--------%s------------\n",p1.name);
	for(i=0;i<8;i++){
		getchar();
		printf("Card Strenght: ");
		scanf("%c", &p1.cards[i].strenght);
		getchar();
		printf("Card Paint: ");
		scanf("%c\n", &p1.cards[i].paint);
		getchar();
		printf("\n");
	}
	
	printf("--------%s------------\n",p2.name);
	for(i=0;i<8;i++){
		getchar();
		printf("Card Strenght: ");
		scanf("%c", &p2.cards[i].strenght);
		getchar();
		printf("Card Paint: ");
		scanf("%c", &p2.cards[i].paint);
		getchar();
		printf("\n");
	}
	
	battle(p1,p2);

	return 0;
}

int fight(card c1, card c2){
	int str1=0,str2=0,paint1,paint2,i;
	for(i=0;i<13;i++){
		if(c1.strenght == strenghts[i])str1 = i;
		if(c2.strenght == strenghts[i])str2 = i;
	}
	for(i=0;i<4;i++){
		if(c1.paint == paints[i])paint1 = i;
		if(c2.paint == paints[i])paint2 = i;
	}
	if(str1 > str2)return 1;
	else if(str2 > str1)return 2;
	else{
		if(paint1 > paint2 || paint1 == paint2)return 1;
		else return 2;
	}


}

void battle(player p1, player p2){
	int i,n,score1=0,score2=0;
	for(i=0;i<8;i++){
		if(fight(p1.cards[i],p2.cards[i]) == 1)score1 = score1+1;
		else score2 = score2+1;
	}
	printf("And the winner is:....");
	if(score1>score2)printf("%s",p1.name);
	else if(score1 < score2)printf("%s",p2.name);
	else printf("no one, it is draw");
	printf("\n%d - %d",score1,score2);
}