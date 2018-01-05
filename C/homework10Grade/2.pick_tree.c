#include <stdio.h>
#include <math.h>
typedef struct{
    float height;
    float price;
}tree_t;
tree_t best_price_for_height(tree_t[10]);
int main(int argc, char **argv){
    tree_t trees[10];
    trees[0].height = 0;
    trees[0].price = 0;
    trees[1].height = 0.80;
    trees[1].price = 4;
    trees[2].height = 0.80;
    trees[2].price = 5;
    trees[3].height = 1.60;
    trees[3].price = 10;
    trees[4].height = 2;
    trees[4].price = 20;
    trees[5].height = 2;
    trees[5].price = 16;
    trees[6].height = 1.80;
    trees[6].price = 12;
    trees[7].height = 0.55;
    trees[7].price = 4;
    trees[8].height = 1;
    trees[8].price = 6;
    trees[9].height = 3;
    trees[9].price = 25;

    float price_for_cm;
    tree_t best_tree = best_price_for_height(trees);
    price_for_cm = (best_tree.price / best_tree.height)*0.01;
    printf("height: %.2f\nprice: %.2f\nprice for cm: %.2f\n",best_tree.height,best_tree.price,price_for_cm);
    return 0;
}
tree_t best_price_for_height(tree_t trees[10]){
	int pos=0;
    int size=10,i;
    float best=sizeof(int);
    for(i=0;i<size;i++){
    	if(trees[i].height != 0 && trees[i].price != 0){
        	if((trees[i].price / trees[i].height)*0.01 < best){
            	best = (trees[i].price / trees[i].height)*0.01;
            	pos = i;
        	}
    	}
    }
    return trees[pos];
}
