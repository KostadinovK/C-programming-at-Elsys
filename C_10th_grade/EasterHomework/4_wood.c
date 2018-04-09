#include <stdio.h>

typedef struct{
    float width;
    float length;
    float height;
    float price;
}wood_t;

int can_fit(wood_t,wood_t);

int main(){
    wood_t in_store,wanted;

    in_store.height = 2;
    in_store.length = 2;
    in_store.width = 2;

    wanted.height = 3;
    wanted.length = 2;
    wanted.width = 2;

    printf("%d\n",can_fit(in_store,wanted));

    return 0;
}

int can_fit(wood_t in_store, wood_t wanted){
    if(in_store.height <= wanted.height && in_store.length <= wanted.length && in_store.width <= wanted.width){
        return 1;
    }else{
        return -1;
    }

}
