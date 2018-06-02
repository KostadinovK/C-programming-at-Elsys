#include <stdio.h>
#include <string.h>
typedef struct {char name[20];int num;int marks[20];float avr;} student;
int main()
{
    student st[30];
    student c;
    int i,j,ch,bru,brp;
    float avr;
    do{
        printf("Enter the amount of students in class: ");
        scanf("%d",&bru);
    }while(bru < 1 || bru > 30);

    do{
        printf("Enter the amount of subjects: ");
        scanf("%d",&brp);
        getchar();
    }while(brp < 1 || brp > 20);

    for(i=0;i<bru;i++){
        printf("\nName of the student: ");
        gets(st[i].name);
        do{
            printf("Number in class: ");
            scanf("%d",&st[i].num);
        }while(st[i].num < 1 || st[i].num > bru);
        for(j=0;j<brp;j++){
            do{
                printf("Mark %d: ",j+1);
                scanf("%d",&st[i].marks[j]);
            }while(st[i].marks[j] < 2 || st[i].marks[j] > 6);
        }
        getchar();
    }

    do{
    printf("\nSorted by: 1 or 2");
    printf("\n1.By names");
    printf("\n2.By average");
    printf("\nChoice: ");
    scanf("%d",&ch);
    }while(ch < 1 || ch > 2);

    /**average**/
    for(i=0;i<=bru;i++){
        avr = 0;
        for(j=0;j<brp;j++){
            avr = avr + st[i].marks[j];
        }
        st[i].avr = avr/brp;
    }
    /**sorting by average**/
    if(ch == 2){
        for(i=1;i < bru;i++){
            for(j=0;j<bru-i;j++){
                if(st[j].avr < st[j+1].avr){
                    c = st[j];
                    st[j] = st[j+1];
                    st[j+1] = c;
                }
            }
        }
    }else{
    /**sorting by names**/
        for(i=1;i<bru;i++){
            for(j=0;j < bru-i;j++){
                if(strcmp(st[j].name,st[j+1].name)>0){
                    c = st[j];
                    st[j] = st[j+1];
                    st[j+1] = c;
                }
            }
        }
    }
    /**output**/
    for(i=0;i<bru;i++){
        printf("\n%-22s %-3d",st[i].name,st[i].num);
        for(j=0;j<brp;j++){
            printf(" %d ",st[i].marks[j]);
        }
        printf("%6.2f",st[i].avr);
    }


    printf("\n");
    printf("\n");
    printf("\n");
    printf("\nStudents to get money: ");
    for(i=0;i<bru;i++){
        if(st[i].avr >= 5.5){
            printf("\n%-22s %-3d",st[i].name,st[i].num);
            for(j=0;j<brp;j++){
                printf(" %d ",st[i].marks[j]);
            }
            printf("%6.2f",st[i].avr);
        }
    }


    printf("\n");
    printf("\n");
    printf("\n");
    printf("\nStudents to go on summer session: ");
    for(i=0;i<bru;i++){
        if(st[i].avr < 3.0){
            printf("\n%-22s %-3d",st[i].name,st[i].num);
            for(j=0;j<brp;j++){
                printf(" %d ",st[i].marks[j]);
            }
            printf("%6.2f",st[i].avr);
        }
    }
    return 0;
}
