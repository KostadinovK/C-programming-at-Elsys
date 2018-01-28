#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char name[30];
	float diagonal;
	int rating;
}monitor;
typedef struct{
	monitor m[5];
	int amount;
}m_shop;
monitor choose_monitor(m_shop,float);
void sort_by_rate(monitor[]);
float average_rating(m_shop);
int main(int argc, char **argv){
	m_shop shop1;
	monitor m[5];
	monitor best;
	float avr=0;
	shop1.m[0].diagonal = 28.7;
	shop1.m[0].rating = 44;
	strcpy(shop1.m[0].name,"BENQ X234");
	shop1.m[1].diagonal = 28.7;
	shop1.m[1].rating = 65;
	strcpy(shop1.m[1].name,"Asus ROG");
	shop1.m[2].diagonal = 28.7;
	shop1.m[2].rating = 75;
	strcpy(shop1.m[2].name,"AOS 5");
	shop1.m[3].diagonal = 27.7;
	shop1.m[3].rating = 45;
	strcpy(shop1.m[3].name,"Philips Xc");
	shop1.m[4].diagonal = 28.7;
	shop1.m[4].rating = 87;
	strcpy(shop1.m[4].name,"Samsung");
	shop1.amount = 5;
	best = choose_monitor(shop1,26.7);
	sort_by_rate(m);
	avr = average_rating(shop1); 
	printf("Name: %s\n",best.name);
	printf("Rate: %d\n",best.rating);

	printf("Average: %.1f",avr);
	return 0;
}
monitor choose_monitor(m_shop shop1,float diagonal){
	int i,y=0;
	float max=0.0;
	monitor res;
	for(i=0;i<5;i++){
		if(shop1.m[i].diagonal == diagonal){
			y = 1;
			if(max < shop1.m[i].rating){
				max = shop1.m[i].rating;
				strcpy(res.name,shop1.m[i].name);
			}
		}
		if(y==0){
			strcpy(res.name,shop1.m[0].name);
			max = shop1.m[0].rating;
		}
	}
	res.rating = max;
	return res;
}
void sort_by_rate(monitor m[5]){
	int i,j,swap;
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(m[j].rating < m[j+1].rating){
				swap = m[j].rating;
				m[j].rating = m[j+1].rating;
				m[j+1].rating = swap;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",m[i].rating);
	}

}

float average_rating(m_shop shop1){
	float sum=0.0;
	int i;
	for(i=0;i<shop1.amount;i++){
		sum = sum + shop1.m[i].rating;
	}
	return sum / (float)shop1.amount;

}