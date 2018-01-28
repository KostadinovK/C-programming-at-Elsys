#include <stdio.h>
typedef struct time_t{
	int hours;
	int minutes;
}time;

typedef struct datetime_t{
	int year;
	int month;
	int day;
	time t1;

}date;
int is_before(time,time);
int is_lunch_break(time);
int season(date);
int main(){
	time t1,t2;
	date d1;
	printf("time t1: \n");
	printf("t1.hours: ");
	scanf("%d",&t1.hours);
	printf("t1.minutes: ");
	scanf("%d",&t1.minutes);

	t2.hours = 14;
	t2.minutes = 30;

	d1.year = 2017;
	d1.month = 10;
	d1.day = 31;
	d1.t1.hours = 18;
	d1.t1.minutes = 30;

	if(is_before(t1,t2) == 0){
		printf("They are equal!");
	}else if(is_before(t1,t2) == 1){
		printf("t1 is before t2!");
	}else{
		printf("t2 is before t1!");
	}

	if(is_lunch_break(t1) == 1)
		printf("Lunch Break!");
	else printf("Work Time!");


	switch(season(d1)){
		case 3: printf("Winter");break;
		case 0: printf("Spring");break;
		case 1: printf("Summer");break;
		case 2: printf("Autumn");break;
	}
}
int is_before(time t1,time t2){
	if(t1.hours > t2.hours){
		return 1;
	}else if(t1.hours < t2.hours){
		return 2;
	}else{
		if(t1.minutes > t2.minutes){
			return 1;
		}else if(t1.minutes < t2.minutes){
			return 2;
		}else{return 0;}
	}

}

int is_lunch_break(time t1){
	if(t1.hours == 13){
		return 1;
	}else if(t1.hours == 12){
		if(t1.minutes >= 15)return 1;
		else return 0;
	}else if(t1.hours == 14){
		if(t1.minutes <= 23)return 1;
		else return 0;
	}

}

int season(date d1){
	if((d1.month == 12 && d1.day >= 22)|| d1.month == 1 || d1.month == 2 || (d1.month == 3 && d1.day <= 21)){
		return 3;
	}
	if((d1.month == 3 && d1.day <= 21)||d1.month == 4 ||d1.month == 5 ||(d1.month == 6 && d1.day <= 21)){
		return 0;
	}
	if((d1.month == 6 && d1.day >= 22)|| d1.month == 7 || d1.month == 8 || (d1.month == 9 && d1.day <= 21)){
		return 1;
	}
	if((d1.month == 9 && d1.day <= 21)||d1.month == 10 ||d1.month == 11 ||(d1.month == 12 && d1.day <= 21)){
		return 2;
	}
}