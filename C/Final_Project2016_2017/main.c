#include <stdio.h>
#include <string.h>
#define numTeams 20
#define numPlayers 30
/**
1.Да премахна опцията none за клубовете
2.Да сложа лимит 30 при въвеждането на играчи в един отбор
3.Да не се повтарят номера
4.Да се провери дали отбора на играча е валиден
**/
typedef struct {char name[20];char team[20];int age;int num;char pos[3];char price[12];char nation[30]} player;
typedef struct {char name[30];int year;char money[10];int titles;char city[20]} club;
void writePlayers();
void writeTeams();
void readTeams();
void readPlayers();
void change();
void transfer();
void edit();
char filename[80] = {"clubs.dat\0"};
int main()
{
    int op;
    do{
            printf("\n----------------English Premier League 2016/2017---------------------------\n");
            printf("Currently file: %s",filename);
            printf("\n");
            printf("\n");
            printf("0.Clean Screen\n");
            printf("1.Write\n");
            printf("2.Read\n");
            printf("3.Change files\n");
            printf("4.Edit player\n");
            printf("5.Transfer(Only for players)\n");
            printf("6.Exit\n");
            printf("Choice: ");
            scanf("%d",&op);
            if(strcmp(filename, "clubs.dat")==0){
                if(op == 1)writeTeams();
                else if(op==2)readTeams();
                else if(op==3)change();
                else if(op==4 || op==5)printf("This is only for players!\n");
                else if(op==0)system("cls");
            }else{
                if(op == 1)writePlayers();
                else if(op==2)readPlayers();
                else if(op==3)change();
                else if(op==4)edit();
                else if(op==5)transfer();
                else if(op==0)system("cls");
            }
        }while(op != 6);

    return 0;
}
void writeTeams(){
    FILE *f;
    club t;
    char c;
    int ok=1,i,j;
    if(f=fopen("clubs.dat","rb")){
        printf("This file already exist!");
        printf("Do you want to overwrite it? Y\\N\n");
        c = getche();
        if(c == 'y' || c == 'Y'){
            ok=1;
        }else ok=0;
    }
    if(ok){
        if(f = fopen("clubs.dat","wb")){
            getchar();
            printf("\nAmount of clubs needs to be 20!\n");
            for(i=0;i<numTeams;i++){
                printf("\n");
                printf("\n");
                printf("Name: ");
                gets(t.name);
                if(strcmp(t.name,"none")==0)break;
                printf("Hometown: ");
                gets(t.city);
                printf("Money(example: 120M): ");
                gets(t.money);
                do{
                    printf("Year found: ");
                    scanf("%d",&t.year);
                }while(t.year < 1800 || t.year > 2000);
                do{
                    printf("Titles: ");
                    scanf("%d",&t.titles);
                }while(t.titles < 0 || t.titles > 30);
                getchar();
                fwrite(&t,sizeof(t),1,f);

            }
            fclose(f);
            }
        }else printf("Error opening file!");

    }


void writePlayers(){
    FILE *f;
    player p;
    char c;
    int i=1,j,ok=1,op,num,br=0;
    if(f=fopen("players.dat","rb")){
        printf("File exist!Do you want to overwrite it? Y\\N\n");
        c = getche();
        if(c == 'Y'||c == 'y'){
            ok=1;
        }else ok=0;
    }
    getchar();
    if(ok){
    if(f = fopen("players.dat","wb")){
        printf("\nMax players in a squad are 30\n");
        while(1){
            printf("\n");
            printf("\n");
            if(br == 2){
                break;
            }
            do{
                printf("Number: ");
                scanf("%d",&p.num);
            }while(p.num < 1 || p.num > 99);

            getchar();
            printf("Name: ");
            gets(p.name);
            printf("Club: ");
            gets(p.team);
            do{
                printf("Age: ");
                scanf("%d",&p.age);
            }while(p.age < 16 || p.age > 40);
            getchar();
            printf("Nationality: ");
            gets(p.nation);
            printf("Position: ");
            gets(p.pos);
            printf("Price(example: 50M): ");
            gets(p.price);
            printf("\n");
            printf("\n");
            br++;
            fwrite(&p,sizeof(p),1,f);
    }
        fclose(f);
    }else printf("Error opening players.dat!");
}


}
void readTeams(){
    FILE *f;
    club t;
    if(f = fopen("clubs.dat","rb")){
        while(!feof(f)){
            if(fread(&t,sizeof(t),1,f)){
                printf("\n%-22s %-14s %-5s %-6d %-3d",t.name,t.city,t.money,t.year,t.titles);
            }
        }
        fclose(f);
        printf("\n");
    }else printf("Error opening file!");

}
void readPlayers(){
    FILE *f;
    player p;
    if(f=fopen("players.dat","rb")){
        while(!feof(f)){
            if(fread(&p,sizeof(p),1,f)){
                printf("\n%-22s %-3d %-22s %-3d %-20s %-4s %-5s",p.name,p.num,p.team,p.age,p.nation,p.pos,p.price);
            }
        }
        fclose(f);
        printf("\n");
    }else printf("Error opening file!\n");
}
void transfer(){
    int c,pos,num;
    FILE *f,*f2,*tmp;
    player p;
    char name[30],nclub[30],price[10],s[80];
    if(f=fopen("players.dat","rb+")){
        if(f2=fopen("transfers.dat","rb+")){
        do{

            printf("1.From a other club(Add)\n");
            printf("2.To a EPL club(Edit)\n");
            printf("3.To a other club(Remove)\n");
            printf("4.Transfer List\n");
            printf("Choice: ");
            scanf("%d",&c);
        }while(c < 1 || c > 4);
        if(c == 1){
            while(fread(&p,sizeof(p),1,f)){

            }
            while(fread(&p,sizeof(p),1,f2)){

            }
            printf("\n");
            printf("\n");
            do{
                printf("Number: ");
                scanf("%d",&p.num);
            }while(p.num < 1 || p.num > 99);
            getchar();
            printf("Name: ");
            gets(p.name);
            printf("Club: ");
            gets(p.team);
            do{
                printf("Age: ");
                scanf("%d",&p.age);
            }while(p.age < 16 || p.age > 40);
            getchar();
            printf("Nationality: ");
            gets(p.nation);
            printf("Position: ");
            gets(p.pos);
            printf("Price(example: 50M): ");
            gets(p.price);
            printf("\n");
            printf("\n");
            fwrite(&p,sizeof(p),1,f);
            fwrite(&p,sizeof(p),1,f2);
            fclose(f);
        }else if(c==2){
            if(f=fopen("players.dat","rb+")){
            getchar();
            printf("Player Name: ");
            gets(name);
            printf("New Club: ");
            gets(nclub);
            do{
                printf("New number: ");
                scanf("%d",&num);
            }while(num < 1 || num>99);
            getchar();
            printf("Price: ");
            gets(price);
            while(fread(&p,sizeof(p),1,f2)){

            }
            while(!feof(f)){
                pos = ftell(f);
                if(fread(&p,sizeof(p),1,f)){
                    if(strcmp(name,p.name)==0 && strcmp(p.team,nclub)!=0){
                        strcpy(p.team,nclub);
                        p.num = num;
                        strcpy(p.price,price);
                        fseek(f,pos,0);
                        fwrite(&p,sizeof(p),1,f);
                        fgets(s,80,f2);break;
                    }
                }
            }
            fwrite(&p,sizeof(p),1,f2);
            fclose(f);
            }else printf("Error opening file!/n");
            }else if(c==3){
                if(f2=fopen("transfers.dat","rb+")){
                if(f=fopen("players.dat","rb+")){
                getchar();
                printf("Enter Name: ");
                gets(name);
                printf("Price: ");
                gets(price);
                while(fread(&p,sizeof(p),1,f2)){

                }
                if(tmp = fopen("temp.dat","wb")){
                    while(!feof(f)){
                        if(fread(&p,sizeof(p),1,f)){
                            if(strcmp(name,p.name)!=0){
                                fwrite(&p,sizeof(p),1,tmp);
                            }else{
                                fwrite(&p,sizeof(p),1,f2);
                                strcpy(p.team,"other club");
                            }
                        }
                    }
                    fclose(tmp);
                    fclose(f);
                }else printf("Error temp.dat!\n");
                }else printf("Error opening file!\n");
                if(f=fopen("players.dat","wb")){
                if(tmp=fopen("temp.dat","rb")){
                    while(!feof(tmp)){
                        if(fread(&p,sizeof(p),1,tmp)){
                            fwrite(&p,sizeof(p),1,f);
                        }
                    }
                    fclose(tmp);
                    fclose(f);
                }else printf("Error opening temp.dat\n");
                }else printf("Error opening file!\n");
                }else printf("Error opening transfers.dat!\n");
        }else if (c==4){
            int i = 1;
                printf("----------------------Transfer List EPL 2017-----------------\n");
                while(!feof(f2)){
                    if(fread(&p,sizeof(p),1,f2)){
                            printf("%d %-25s to %-20s for %-4s \n",i,p.name,p.team,p.price);
                        i++;
                    }
                }
        }
            }else printf("Error opening transfer list!\n");
            fclose(f2);

    }else printf("Error opening file!");
    fclose(f);
}
void edit(){
    FILE *f;
    player p;
    int posf,age,num;
    char name[30],price[5];
    if(f=fopen("players.dat","rb+")){
        getchar();
        printf("Name: ");
        gets(name);
        do{
            printf("New number: ");
            scanf("%d",&num);
        }while(num < 1 || num > 99);
        getchar();
        printf("New price: ");
        gets(price);
        while(!feof(f)){
            posf = ftell(f);
            if(fread(&p,sizeof(p),1,f)){
                if(strcmp(name,p.name)==0){
                    do{
                        printf("New age: ");
                        scanf("%d",&age);
                    }while(age < p.age || age > p.age+1);
                    strcpy(p.price,price);
                    p.num = num;
                    p.age = age;
                    fseek(f,posf,0);
                    fwrite(&p,sizeof(p),1,f);break;
                }
            }
        }

    }else printf("Error opening file!");
    fclose(f);
}
void change(){

    if(strcmp("clubs.dat",filename)==0){
        strcpy(filename,"players.dat");
    }else{
        strcpy(filename,"clubs.dat");
    }

}
