#include <stdio.h>
unsigned int check_mask(unsigned int,unsigned int);
int main(){
  unsigned int num,mask;
  printf("Enter a number: ");
  scanf("%d",&num);
  printf("Enter a mask: ");
  scanf("%d",&mask);
  printf("%d\n",check_mask(num,mask));
  return 0;
}
unsigned int check_mask(unsigned int num,unsigned int mask){
  int res = num & mask;
  if(res == num)return 1;
  else return 0;

}
