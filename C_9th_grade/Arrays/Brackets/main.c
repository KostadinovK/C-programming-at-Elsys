#include <stdio.h>
#include <stdlib.h>

int main()
{
    char brackets[250];
    char pairs[10][10];
    char opens[20];
    char closes[20];
    char c;
    int i,p,j,br,amount,inc,close,open,n,m;
    br = 0;
    inc = 0;
    p = 0;
    do{
        c = getche();

        if(c == '('){
            br = br+1;
            brackets[p] = c;
            p++;

           }
        if(c == ')'){
            br=br-1;
            brackets[p] = c;
            p++;
        }
        if(br < 0){
            inc = 1;
        }
    }while(c != 13);

    if(inc == 1 || br != 0){
        printf("\nNot!");
    }else{
        printf("\nCorrect!");
    }
    if (inc == 0){
        for(i=0;i<p;i++){
            if (brackets[i] == ')'){
                close = i;
                for(j=0;j<close;j++){
                    if(brackets[j] == '('){
                        open = j;
                        while(open < j+1 && brackets[j+1] == '('){
                                open++;
                              }
                    //printf("%c",brackets[open]);
                        printf("%d",open);
                        brackets[open] = '#';
                        open = 0;
                //printf("%c",brackets[close]);
                printf("%d",close);
                brackets[close] = '#';
                           }
                       }
                }
            }
        }


    return 0;
}
