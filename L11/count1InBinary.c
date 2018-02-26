#include <stdio.h>
int count_ones(int);
int main(){
  int res = count_ones(15);
  printf("%d\n",res);
  return 0;
}
int count_ones(int num){
  int res = 0;
  for(int i = 0;i < sizeof(num) * 8-1 ;i++){
    int mask = 1 << i;
    if(num & mask)res++;
  }

  return res;
}
