#include <stdio.h>
#include <stdlib.h>
#define maxn 100
void FillM(int [maxn][maxn],int,int,int);
void WalkM(int [maxn][maxn],int,int,int,int);
int done = 0;
int main()
{
    int maze[maxn][maxn];
    int i,j,m,n,p,k,l;
    do{
        printf("Enter m: ");
        scanf("%d",&m);
        printf("Enter n: ");
        scanf("%d",&n);
    }while((m < 0 || m > maxn) &&(n < 1 || n > maxn));
    do{
        printf("Enter the chance for 0 in procents: ");
        scanf("%d",&p);
    }while(p < 1 || p > 100 );
    FillM(maze,m,n,p);
    i=j=1;
    k=l=0;
    WalkM(maze,m,n,i,j);
    if(done == 0){
        printf("No way!\n");
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf(" %d ",maze[i][j]);
        }
        printf("\n");
}
}
void FillM(int maze[maxn][maxn],int m, int n,int p){
    int i,j,k;
    srand(time(NULL));
    for(i=1;i<=m;i++){
        for(j = 1;j <= n;j++){
            k = rand() % 100 + 1;
            if(k <= p) maze[i][j] = 0;
            else
                maze[i][j] = 1;
            }
    }
    printf("The entry[1,1] and the exit[m,n] are 0!\n");
    maze[1][1] = 0;
    maze[m][n] = 0;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            printf(" %d ",maze[i][j]);
        }
        printf("\n");
    }

}
void WalkM(int maze[maxn][maxn],int m,int n, int i, int j){
    ///forwards
    if(maze[i][j+1] == 0 && i <= m && j+1<=n){
        if(i == m && j+1 == n){
            printf("Done\n");
            done = 1;
        }else{
            j = j+1;
            printf("Forwards\n");
            printf("i = %d j = %d\n",i,j);
            WalkM(maze,m,n,i,j);
            }
    }else{
        ///down
        if(maze[i+1][j] == 0 && i+1 <= m && j<=n){
            if(i+1 == m && j == n){
                printf("Done!\n");
                done = 1;
            }else{
                i = i+1;
                printf("Down\n");
                printf("i = %d j = %d\n",i,j);
                WalkM(maze,m,n,i,j);
                }
        }else{
            maze[i][j] = 2;
            ///up
            if(maze[i-1][j] == 0 && i-1 >= 1 && i<=m){
                i = i-1;
                printf("Up\n");
                printf("i = %d j = %d\n",i,j);
                WalkM(maze,m,n,i,j);
            }else{
                ///back
                if(maze[i][j-1] == 0 && j-1 >= 1 && i <= m){
                    j = j-1;
                    printf("Back\n");
                    printf("i = %d j = %d\n",i,j);
                    WalkM(maze,m,n,i,j);

                }
            }
        }
       }





    }
/**void StepM(int maze[maxn][maxn],int m,int n,int i,int j,int k,int l,int e){
    printf("i,j = %d %d",i,j);
    printf("k,l = %d %d",k,l);
    ///back
    e++;
    if(e > 20){
        printf("LOOP");
        ///back
    }else{
        if(maze[i][j-1] == 0 && j-1 >= 1 && i <= m && (i!=k || j-1!=l)){
            if(i == m && j-1 == n){
                printf("Done!\n");
            }else{
                k = i;
                l = j;
                j = j-1;
                printf("One\n");
                printf("%d\n",e);
                printf("i = %d j = %d\n",i,j);
                printf("k = %d l = %d\n",k,l);
                StepM(maze,m,n,i,j,k,l,e);
            }
        }else{
            ///up
            if(maze[i-1][j] == 0 && i-1 >= 1 && i<=m && (i-1!=k || j!=l)){
                if(i-1 == m && j == n){
                    printf("Done!\n");
                }else{
                    k = i;
                    l = j;
                    i = i-1;
                    printf("Two\n");
                    printf("i = %d j = %d\n",i,j);
                    printf("k = %d l = %d\n",k,l);
                    StepM(maze,m,n,i,j,k,l,e);
                }
            }else{
                /// down
                if(maze[i+1][j] == 0 && i+1 <= m && j<=n && (i+1!=k || j!=l)){
                    if(i+1 == m && j == n){
                        printf("Done!\n");
                    }else{
                        k = i;
                        l = j;
                        i = i+1;
                        printf("Three\n");
                        printf("i = %d j = %d\n",i,j);
                        printf("k = %d l = %d\n",k,l);
                        StepM(maze,m,n,i,j,k,l,e);
                    }
                }else{
                    ///forwards
                    if(maze[i][j+1] == 0 && i <= m && j+1<=n && (i!=k || j+1!=l)){
                        if(i == m && j+1 == n){
                            printf("Done\n");
                        }else{
                            k = i;
                            l = j;
                            j = j+1;
                            printf("Four\n");
                            printf("i = %d j = %d\n",i,j);
                            printf("k = %d l = %d\n",k,l);
                            StepM(maze,m,n,i,j,k,l,e);
                        }
                    }else{
                        printf("Error!");
                        if(i == 1 && j == 1){
                            printf("No way!\n");
                        }else{
                            maze[i][j] = 2;
                            i=j=1;
                            k=l=0;
                            printf("Five\n");
                            printf("i = %d j = %d\n",i,j);
                            printf("k = %d l = %d\n",k,l);
                            StepM(maze,m,n,i,j,k,l,e);
                        }
                    }
                }
            }
**/









