#include <stdio.h>
int restore_data(int,int);
int main(){
  int data1,xor;
  printf("Enter data1: ");
  scanf("%d",&data1);
  printf("Enter xor: ");
  scanf("%d",&xor);
  printf("%d\n",restore_data(data1,xor));
  return 0;
}

int restore_data(int data1, int xor){
  return data1 ^ xor;

}
