#include <stdio.h>
typedef struct{
	char type;
	char size;
	int price;
}barbaron_t;
typedef struct{
	barbaron_t barbarons[10];
	int barbarons_amount;
}barbaron_shop_t;
void add_barbaron(barbaron_shop_t *, barbaron_t);
barbaron_t buy_barbaron(barbaron_shop_t *,char,char,int *);
void print_barbaron_shop(barbaron_shop_t);
int main(int argc, char **argv){
	barbaron_shop_t barbaron_shop;
	barbaron_t b1 = {'B','L',20};
	barbaron_t b2 = {'B','L',30};
	barbaron_t b3 = {'C','L',35};
	barbaron_t b4 = {'P','S',15};
	barbaron_shop.barbarons_amount = 4;
	barbaron_shop.barbarons[0] = b1;
	barbaron_shop.barbarons[1] = b2;
	barbaron_shop.barbarons[2] = b3;
	barbaron_shop.barbarons[3] = b4;
	print_barbaron_shop(barbaron_shop);
	barbaron_t b5 = {'A','S',10};
	add_barbaron(&barbaron_shop,b5);
	print_barbaron_shop(barbaron_shop);
	int money = 40;
	char type = 'B';
	char size = 'L';
	barbaron_t buyed_barbaron = buy_barbaron(&barbaron_shop,type,size,&money);
	printf("money = %d\n",money);
	printf("%c %c %d\n",buyed_barbaron.type,buyed_barbaron.size,buyed_barbaron.price);


	return 0;
}
void add_barbaron(barbaron_shop_t *shop,barbaron_t barbaron){
	if(shop->barbarons_amount < 10){
		shop->barbarons[shop->barbarons_amount] = barbaron;
		shop->barbarons_amount++;
	}else{
		printf("The shop is already full!\n");
	}


}
barbaron_t buy_barbaron(barbaron_shop_t *shop,char type,char size,int *money){
	barbaron_t res;
	int i;
	for(i=0;i<shop->barbarons_amount;i++){
		if(shop->barbarons[i].type == type && shop->barbarons[i].size == size){
			if(shop->barbarons[i].price < *money){
				*money = *money - shop->barbarons[i].price;
				res = shop->barbarons[i];
			}
		}
	}

	return res;
}
void print_barbaron_shop(barbaron_shop_t shop){
	int i;
	for(i=0;i<shop.barbarons_amount;i++){
		printf("%c %c %d\n",shop.barbarons[i].type,shop.barbarons[i].size,shop.barbarons[i].price);
		printf("\n");
	}

}