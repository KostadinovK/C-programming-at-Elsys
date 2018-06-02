#include <stdio.h>
#include <stdlib.h>
#define maxu 30
#define maxp 20

int main()
{
    int marks[maxu][maxp];
    int bru,brp,i,j;

    do{
        printf("Enter number of students: ");
        scanf("%d",&bru);
    }while(bru < 1 || bru > maxu);

    do{
        printf("Enter number of subjects: ");
        scanf("%d",&brp);
    }while(brp < 1 || brp > maxp);

    for(i=0;i<bru;i++){
        for(j=0;j<brp;j++){
            do{
                printf("Enter mark %d of student %d: ",j+1,i+1);
                scanf("%d",&marks[i][j]);
            }while(marks[i][j] < 2 || marks[i][j] > 6);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");
    // Sreden uspeh na wseki ucenik
    float sum;
    sum = 0;
    for(i=0;i<bru;i++){
        sum = 0;
        for(j=0;j<brp;j++){
            sum = sum + marks[i][j];
            printf("%5d",marks[i][j]);
        }
        printf("   Average of a student: %1.2f\n",sum/brp);
    }
    // Sreden uspeh po wseki predmet pootdelno
    float sredna[brp];
    for(i=0;i<brp;i++){
        sredna[i] = 0;
        for(j=0;j<bru;j++){
            sredna[i] = sredna[i] + marks[j][i];
        }
        sredna[i] = sredna[i]/bru;
    }
    printf("      Average on a subject:        \n");
    for(i=0;i<brp;i++){
        printf("%5.2f",sredna[i]);
    }
    // Sreden uspeh na celiq klas
    float sredna2;
    sredna2 = 0;
    for(i=0;i<bru;i++){
        for(j=0;j<brp;j++){
            sredna2 = sredna2 + marks[i][j];
        }
    }
    printf("\n%5.2f",sredna2/(bru*brp));
    return 0;
}
