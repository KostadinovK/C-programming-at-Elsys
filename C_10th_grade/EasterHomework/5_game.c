#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    float price;
    char country_code[3];
}game_t;

int is_game_available(game_t, char[4]);
int how_many_available(game_t[10], char[4]);

int main(){
    game_t game;
    game.id = 22;
    game.price = 25;
    strcpy(game.country_code, "BUL");
    printf("%d %d\n",is_game_available(game,"BULG"),is_game_available(game,"ENGL"));

    game_t games[10];
    games[0].id = 1;
    games[0].price = 25;
    strcpy(games[0].country_code, "BUL");
    games[1].id = 2;
    games[1].price = 25;
    strcpy(games[1].country_code, "BUL");
    games[2].id = 3;
    games[2].price = 25;
    strcpy(games[2].country_code, "ENG");
    games[3].id = 4;
    games[3].price = 25;
    strcpy(games[3].country_code, "GRM");
    games[4].id = 5;
    games[4].price = 25;
    strcpy(games[4].country_code, "AUS");
    games[5].id = 6;
    games[5].price = 25;
    strcpy(games[5].country_code, "AUS");
    games[6].id = 7;
    games[6].price = 25;
    strcpy(games[6].country_code, "BUL");
    games[7].id = 8;
    games[7].price = 25;
    strcpy(games[7].country_code, "BUL");
    games[8].id = 9;
    games[8].price = 25;
    strcpy(games[8].country_code, "BUL");
    games[9].id = 10;
    games[9].price = 25;
    strcpy(games[9].country_code, "CHN");

    printf("availables = %d\n", how_many_available(games,"BULG"));
    return 0;
}
/// because the game code should be maximum 3 chars, i only check if the code matches the first three chars of the country
int is_game_available(game_t game, char country[4]){
    char country_code[3];
    int i;
    for(i = 0; i< 4;i++){
        country_code[i] = country[i];
    }
    country_code[3] = '\0';
    if(strcmp(game.country_code,country_code) == 0){
        return 1;
    }else{
        return 0;
    }
}

int how_many_available(game_t games[10], char country[4]){
    int i;
    int res = 0;
    for(i = 0;i < 10;i++){
        int available = is_game_available(games[i],country);
        if(available == 1){
            res++;
        }
    }
    return res;
}

