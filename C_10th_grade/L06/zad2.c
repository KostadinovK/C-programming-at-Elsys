#include <stdio.h>
#include <string.h>
typedef struct{
	char city[20];
	char street[40];
	int house_num;
	int entry;
	int floor;
	int apartament;

}adress;
typedef struct{
	char name[30];
	char number[10];
}client;
typedef struct{
	adress adr;
	client c;
	int pizza;
}order_info;
adress get_adress();
int choose_pizza();
client get_client_info();
int main(int argc, char **argv){
	adress adr;
	client c;
	order_info info;
	
	printf("Hello, I am PizzBot\n");
	printf("Good day/evening\n");
	printf("Please enter your adress, as folowing\n");
	adr = get_adress();
	info.adr = adr;
	printf("Thank you,now choose from our menu please\n");
	info.pizza = choose_pizza();
	printf("Thank you, now please enter your name and number\n");
	c = get_client_info();
	info.c = c;
	printf("str1 = %s str2 =%s",info.c.name,info.c.number);
	printf("Order info: \n");
	printf("%s%s %d,%d,%d, %d \n",info.adr.city,info.adr.street,info.adr.house_num,info.adr.entry,info.adr.floor,info.adr.apartament);
	printf("%s%s\n",info.c.name,info.c.number);
	printf("Pizza number: %d\n",info.pizza);
	return 0;
}
adress get_adress(){
	adress adr;
	
	printf("City: ");
	fgets(adr.city,20,stdin);
	//printf("\n");
	getc(stdout);
	printf("Street: ");
	fgets(adr.street,40,stdin);
	getc(stdout);
	
	do{
		printf("House number: ");
		scanf("%d",&adr.house_num);
	}while(adr.house_num < 0);
	do{
		printf("Entry number: ");
		scanf("%d",&adr.entry);
	}while(adr.entry < 0);
	do{
		printf("Floor: ");
		scanf("%d",&adr.floor);
	}while(adr.floor < 0);
	do{
		printf("Apartament: ");
		scanf("%d",&adr.apartament);
	}while(adr.apartament < 0);
	return adr;
}

int choose_pizza(){
	int choise;
	printf("1.Pizza1\n");
	printf("2.Pizza2\n");
	printf("3.Pizza3\n");
	printf("4.Pizza4\n");
	printf("5.Pizza5\n");
	do{
		printf("Please enter the number of the pizza in the menu: ");
		scanf("%d",&choise);
	}while(choise < 1 || choise > 5);
	return choise;
}

client get_client_info(){
	client c;
	char str1[30],str2[30],str3[30];
	int i;
	getchar();
	printf("Enter your number and name(with enter between them): ");
	fgets(str1,30,stdin);
	getc(stdout);
	fgets(str2,30,stdin);
	//gets(str1);

	//gets(str2);
	for(i=0;i<strlen(str1)-2;i++){
		str3[i] = str1[i]; 
	}
	str3[strlen(str1)-2] == '\0';
	printf("str3 = %s",str3);
	if(str1[0] >= '0' && str1[0] <= '9'){
		strcpy(str1,c.number);
		strcpy(str2,c.name);
	}else{
		strcpy(str1,c.name);
		strcpy(str2,c.number);
	}
	printf("c.name = %s c.number = %s",c.name,c.number);
	return c;
}