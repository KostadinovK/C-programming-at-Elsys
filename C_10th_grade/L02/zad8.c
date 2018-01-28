//smallest five elements of an array
#include <stdio.h>

void smallest(int[]);

int main(){
	int a[9];
	int i;
	for(i=0;i<=9;i++){
		printf("a[%d]: ",i);
		scanf("%d",a+i);
	}
	smallest(a);
	return 0;
}

void smallest(int a[9]){
  int small[4];
  int i,j,c;
  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      //bubble sort
      if(a[j] > a[j+1]){
		c = a[j];
		a[j] = a[j+1];
		a[j+1] = c;
	}
    }
  }
  for(i=0;i<=4;i++){
     small[i] = a[i];
  }
  for(i=0;i<=4;i++){
     printf("small[%d] = %d\n",i,small[i]);
  }
}
