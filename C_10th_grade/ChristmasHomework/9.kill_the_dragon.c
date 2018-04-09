#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
	int hp;
	int damage;
}hero_t;
typedef struct{
	int hp;
	int damage;
}dragon_t;
void hero_attack(hero_t *,dragon_t *);
void dragon_attack(hero_t *,dragon_t *);
int main(int argc,char **argv){
	srand(time(NULL));
	hero_t hero;
	dragon_t dragon;
	int i=1;
	hero.hp = 100;
	hero.damage = 0;
	dragon.hp = 3*75;
	dragon.damage = 0;
	while(i>0){
		printf("%d.The hero attack...\n",i);
		hero_attack(&hero,&dragon);
		printf("hero damage: %d dragon hp: %d\n",hero.damage,dragon.hp);
		i++;
		if(hero.hp <= 0 || dragon.hp <= 0)break;
		printf("%d.The dragon attack...\n",i);
		dragon_attack(&hero,&dragon);
		printf("dragon damage: %d hero hp: %d\n",dragon.damage,hero.hp);
		i++;
		if(hero.hp <= 0 || dragon.hp <= 0)break;
		if(dragon.hp <= 150 && dragon.hp >= 75)printf("The dragon has 2 heads remaining.\n");
		if(dragon.hp > 150)printf("The dragon has 3 heads remaining\n");
		if(dragon.hp > 0 && dragon.hp < 75)printf("The dragon has 1 head remaining\n");
	}
	if(hero.hp > 0){
		printf("The hero killed the dragon\n");
	}else{
		printf("The dragon killed the hero\n");
	}
	return 0;
}
void hero_attack(hero_t *hero,dragon_t *dragon){
	int damage;
	if(hero->hp > 0 && dragon->hp > 0){
		damage = rand() % 7;
		if(damage == 0){
			damage = 50;
			hero->damage = 50;
		}else{
			damage = rand() % 30 + 1;
			hero->damage = damage;
		}
		dragon->hp -= hero->damage;
	}
}
void dragon_attack(hero_t *hero,dragon_t *dragon){
	int damage;
	if(hero->hp > 0 && dragon->hp > 0){
		damage = rand() % 10 + 1;
		dragon->damage = damage;
		hero->hp -= dragon->damage;
	}

}