#include <stdio.h>
#include <string.h>
typedef struct {char name[20];char country[20];int age;char pos[3];char team[20];} player;
int main()
{
    int i;
    player plr;
    printf("Enter player's name: \n");
    gets(plr.name);
    printf("Enter player's country: \n");
    gets(plr.country);
    printf("Enter age: \n");
    scanf("%d",&plr.age);
    getchar();
    printf("Enter player's position: \n");
    gets(plr.pos);
    printf("Enter player's team: \n");
    gets(plr.team);

    printf("%-22s %-22s %3d %-4s %-22s",plr.name,plr.country,plr.age,plr.pos,plr.team);

    return 0;
}
