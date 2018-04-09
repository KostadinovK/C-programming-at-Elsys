#include <stdio.h>

void food_fill(int,int,char [1000][1000],int,int,char,int);
int is_food_spilled_already(int,int,char[1000][1000],int,int,char);
int bean_with_eggs(int,int,char[1000][1000],int,int,char);
int main(int argc,char **argv){
	int row,col,rows,cols;
	scanf("%d %d",&cols,&rows);
	getchar();
	char matrix [rows][cols];
	for(row = 0;row < rows;row++){
		for(col = 0;col < cols;col++){
			scanf("%c",&matrix[row][col]);
			
		}
		getchar();
	}
	int eggX,eggY,beanX,beanY,fusionEgg=0,fusionBean=0;
	char eggChar = 'O',beanChar = '*';
	for(row=0;row<rows;row++){
		for(col = 0;col < cols;col++){
			if(matrix[row][col] == eggChar){
				eggX = row;
				eggY = col;
				if(bean_with_eggs(rows,cols,matrix,eggX,eggY,eggChar)==1){
					fusionEgg = 1;
					food_fill(rows,cols,matrix,eggX,eggY,'@',1);
					break;
				}
				if(!is_food_spilled_already(rows,cols,matrix,eggX,eggY,eggChar && fusionEgg==0)){
					food_fill(rows,cols,matrix,eggX,eggY,eggChar,0);
				}
			}
			if(matrix[row][col] == beanChar){
				beanX = row;
				beanY = col;
				if(bean_with_eggs(rows,cols,matrix,beanX,beanY,beanChar) == 1){
					fusionBean = 1;
					food_fill(rows,cols,matrix,beanX,beanY,'@',1);
					break;
				}
				if(!is_food_spilled_already(rows,cols,matrix,beanX,beanY,beanChar && fusionBean == 0)){
					food_fill(rows,cols,matrix,beanX,beanY,beanChar,0);
				}
			}
		}
	}
	printf("\n");
	for(row = 0;row < rows;row++){
		for(col = 0;col <cols;col++){
			printf("%c",matrix[row][col]);
		}
		printf("\n");
	}
	return 0;
}
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int is_food_spilled_already(int rows,int cols,char matrix[rows][cols],int foodX,int foodY,char foodChar){
	int i,res=0;
	for(i=0;i<4;i++){
		if(matrix[foodX+dx[i]][foodY+dy[i]] != foodChar || matrix[foodX+dx[i]][foodY+dy[i]] != '@'){
			res = 0;
			//break;
		}else{
			res = 1;
		}
	}
	return res;
    

}
int bean_with_eggs(int rows,int cols,char matrix[rows][cols],int foodX,int foodY,char foodChar){
	int i,res=0;
	char otherFood;
	if(foodChar == 'O')otherFood = '*';
	else otherFood = 'O';
	for(i=0;i<4;i++){
		if(matrix[foodX+dx[i]][foodY+dy[i]] == otherFood){
			res = 1;
		}
	}
	return res;

}

void food_fill(int rows,int cols,char matrix[rows][cols],int foodX,int foodY,char foodChar,int is_fused){
	int i,r=rows,c=cols;
	char otherFood;
	matrix[foodX][foodY] = foodChar;
	if(foodChar == 'O' || foodChar == '@')otherFood = '*';
	else otherFood = 'O';
	if(is_fused == 0){
		for(i=0;i<4;i++){
			if(foodX+dx[i]>=0 && foodX+dx[i] < rows && foodY+dy[i] >= 0 && foodY+dy[i]<cols && matrix[foodX+dx[i]][foodY+dy[i]] != '#' && matrix[foodX+dx[i]][foodY+dy[i]] != foodChar && matrix[foodX+dx[i]][foodY+dy[i]] != otherFood){
				food_fill(r,c,matrix,foodX+dx[i],foodY+dy[i],foodChar,0);
			}
		}
	}else{
		for(i=0;i<4;i++){
			if(foodX+dx[i]>=0 && foodX+dx[i] < rows && foodY+dy[i] >= 0 && foodY+dy[i]<cols && matrix[foodX+dx[i]][foodY+dy[i]] != '#' && matrix[foodX+dx[i]][foodY+dy[i]] != foodChar){
				food_fill(r,c,matrix,foodX+dx[i],foodY+dy[i],foodChar,1);
			}
		}
	}
	
 }
