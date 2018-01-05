#include <stdio.h>

typedef struct{
    char form;
    int size;
}decoration_t;
decoration_t pick_best_ball(decoration_t[10]);
int main(int argc, char **argv){
    decoration_t toys[10];
    toys[0].form = 'C';
    toys[0].size = 4;
    toys[1].form = 'O';
    toys[1].size = 1;
    toys[2].form = 'B';
    toys[2].size = 4;
    toys[3].form = 'B';
    toys[3].size = 6;
    toys[4].form = 'B';
    toys[4].size = 7;
    toys[5].form = 'O';
    toys[5].size = 4;
    toys[6].form = 'B';
    toys[6].size = 1;
    toys[7].form = 'C';
    toys[7].size = 4;
    toys[8].form = 'C';
    toys[8].size = 6;
    toys[9].form = 'B';
    toys[9].size = 7;
    decoration_t ball = pick_best_ball(toys);
    printf("form: %c\nsize: %d\n",ball.form,ball.size);
    return 0;
}
decoration_t pick_best_ball(decoration_t toys[10]){
    int i,size=10;
    int pos=0;
    for(i = 0;i<size;i++){
        if(toys[i].form == 'B' && toys[i].size > 5){
	    pos = i;
	    break;
        }
    }
    return toys[pos];
}
