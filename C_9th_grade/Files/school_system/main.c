#include <stdio.h>
#include <string.h>
/**
3.Да не може да се повтори номер
**/
void mywrite();
void myread();
void add();
void changef();
void edit();
void removeS();
typedef struct {int num;char name[30];char marks[20];float avr;} student;
char filen[80] = {"9g.dat\0"};
int main()
{
    int op;
    do{
        printf("Currently file: %s\n",filen);
        printf("1.Write\n");
        printf("2.Read\n");
        printf("3.Add\n");
        printf("4.Edit\n");
        printf("5.Remove\n");
        printf("6.Change File\n");
        printf("7.Exit\n");
        printf("8.Clean Screen\n");
        printf("Choice: ");
        scanf("%d",&op);

        if(op == 1)mywrite();
        else if(op==2)myread();
        else if(op==3)add();
        else if(op==4)edit();
        else if(op==5)removeS();
        else if(op==6)changef();
        else if(op==8)system("cls");
        else break;
    }while(op!=7);
    return 0;
}
void mywrite(){
    FILE *f;
    student s;
    char nums[26];
    int i=0,j=0,ok=1,num=0;
    char c;
    printf("Currently file: %s\n",filen);
    if(f=fopen(filen,"rb")){
        printf("File exist!Do you want to overwrite it? Y\\N\n");
        c = getche();
        if(c == 'Y' || c == 'y'){
            ok=1;
        }else ok = 0;
        fclose(f);
    }
    if(ok){
        if(f=fopen(filen,"wb")){
            printf("\n");
            printf("\n");
            getchar();
            while(1){
                s.avr = 0;
                num=0;
                printf("\n");
                printf("\n");
                do{
                    printf("Press 0 to stop student inputting!\n");
                    printf("Number in class: ");
                    scanf("%d",&s.num);
                }while(s.num < 0 || s.num > 26);
                getchar();
                if(s.num == 0)break;
                printf("Name: ");
                gets(s.name);
                printf("Max 20 Marks!\n");
                printf("Press 0 to stop marks inputting!\n");
                for(j=0;j<20;j++){
                    do{
                        printf("Mark %d: ",j+1);
                        scanf("%d",&s.marks[j]);
                    }while(s.marks[j] < 0||(s.marks[j] < 0&&s.marks[j] < 2) || s.marks[j] > 6);
                    if(s.marks[j] == 0){
                        break;
                    }else{
                        num=num+1;
                    }
                    s.avr = s.avr + s.marks[j];
                }
                getchar();
                s.avr = s.avr / num;
                fwrite(&s,sizeof(s),1,f);
            }
            fclose(f);
        }else{
            printf("Error opening file!\n");
        }
    }
}
void myread(){
    FILE *f;
    student s;
    int i,j=0;
    printf("Currently file: %s\n",filen);
    if(f=fopen(filen,"rb")){
        while(!feof(f)){
            if(fread(&s,sizeof(s),1,f)){
                printf("\n%-22s %-3d",s.name,s.num);
                j=0;
                while(s.marks[j] != 0){
                    printf(" %d ",s.marks[j]);
                    j++;
                }
            printf("%10.2f",s.avr);
        }
        }
        printf("\n");
        fclose(f);
    }else{
        printf("Error!");
    }

}
void add(){
    FILE *f;
    student s;
    int i,j,num;
    printf("Currently file: %s\n",filen);
    if(f=fopen(filen,"rb+")){
        while(fread(&s,sizeof(s),1,f)){

        }
            while(1){
                s.avr = 0;
                num=0;
                printf("\n");
                printf("\n");
                do{
                    printf("Press 0 to stop student inputting!\n");
                    printf("Number in class: ");
                    scanf("%d",&s.num);
                }while(s.num < 0 || s.num > 26);
                getchar();
                if(s.num == 0)break;
                printf("Name: ");
                gets(s.name);
                printf("Max 20 Marks!\n");
                printf("Press 0 to stop marks inputting!\n");
                for(j=0;j<20;j++){
                    do{
                        printf("Mark %d: ",j+1);
                        scanf("%d",&s.marks[j]);
                    }while(s.marks[j] < 0||(s.marks[j] < 0&&s.marks[j] < 2) || s.marks[j] > 6);
                    if(s.marks[j] == 0){
                        break;
                    }else{
                        num=num+1;
                    }
                    s.avr = s.avr + s.marks[j];
                }
                getchar();
                s.avr = s.avr / num;
                fwrite(&s,sizeof(s),1,f);
            }



    }else printf("Error opening file!\n");
    fclose(f);
}


void removeS(){
    /** without help file
    FILE *f;
    student s;
    int num,c;
    printf("Currently file: %s\n",filen);
    do{
        printf("Remove Number: ");
        scanf("%d",&num);
    }while(num < 1 || num > 26);
    if(f=fopen(filen,"rb+")){
        while(!feof(f)){
            if(fread(&s,sizeof(s),1,f)){
                if(s.num == num){
                    c = ftell(f);
                }
            }
        }
    }else printf("Error opening file! ");
**/
    FILE *f,*tmp;
    student s;
    int num,c;
    printf("Currently file: %s\n",filen);
    do{
        printf("Remove Number: ");
        scanf("%d",&num);
    }while(num<1 || num > 26);
    if(f=fopen(filen,"rb")){
        if(tmp=fopen("temp.dat","wb")){
            while(!feof(f)){
                if(fread(&s,sizeof(s),1,f)){
                    if(s.num != num){
                        fwrite(&s,sizeof(s),1,tmp);
                    }
                }
            }
            fclose(f);
            fclose(tmp);
        }else printf("Error opening temp.dat\n");
    }else printf("Error opening file!\n");

    if(f=fopen(filen,"wb")){
        if(tmp=fopen("temp.dat","rb")){
            while(!feof(tmp)){
                if(fread(&s,sizeof(s),1,tmp)){
                    fwrite(&s,sizeof(s),1,f);
                }
            }
            fclose(tmp);
            fclose(f);
        }else printf("Error opening temp.dat!\n");
    }else printf("Error opening file!\n");
}



void changef(){
    FILE *f;
    student s;
    char filename[80];
    getchar();
    printf("Change with: \n");
    gets(filename);
    if(f = fopen(filename,"r")){

        strcpy(filen,filename);
    }else{
        printf("There is no such file!\n");
        printf("Creating new...\n");
        f=fopen(filename,"w");
        strcpy(filen,filename);
    }
    fclose(f);
}
void edit(){
    FILE *f;
    student s;
    int num,n,c,j;
    printf("Currently file: %s\n",filen);
    do{
        printf("Search for(number): \n");
        scanf("%d",&num);
    }while(num < 1 || num > 26);

    if(f = fopen(filen,"rb+")){

        while(!feof(f)){
                  c = ftell(f);
            if(fread(&s,sizeof(s),1,f)){
                if(s.num == num){
                    n=0;
                    s.avr=0;
                    printf("New number: ");
                    scanf("%d",&s.num);
                    getchar();
                    printf("Max 20 Marks!\n");
                    printf("Press 0 to stop marks inputting!\n");
                    for(j=0;j<20;j++){
                        do{
                            printf("Mark %d: ",j+1);
                            scanf("%d",&s.marks[j]);
                        }while(s.marks[j] < 0||(s.marks[j] < 0&&s.marks[j] < 2) || s.marks[j] > 6);
                        if(s.marks[j] == 0){
                            break;
                        }else{
                            n=n+1;
                        }
                        s.avr = s.avr + s.marks[j];
                    }
                        getchar();
                        s.avr = s.avr / n;
                        fseek(f,c,0);
                        fwrite(&s,sizeof(s),1,f); break;
                }
            }
    }
    fclose(f);
    }else printf("Error opening file!\n");








}
