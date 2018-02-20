#include <stdio.h>
#include <math.h>
void print_bits(int);
int count_ones(int);
int main(){
  int decimal;
  printf("Enter a decimal number: ");
  scanf("%d",&decimal);
  print_bits(decimal);
  return 0;
}
int count_ones(int num){
  if(num < 0)num = abs(num);

  int i = 0;
  int binary = 0;
  int ten = 1;
  while(num >= 1){
    int digit = num % 2;
    binary += ten*digit;
    ten *= 10;
    i++;
    num /= 2;
  }
  int bits = 0;
  int binary2 = binary;
  while(binary2 >= 1){
    bits++;
    binary2 /= 10;
  }

  int bitsArray[bits+1];
  int k = 0;
  while(binary >= 1){
    int digit = binary % 10;
    bitsArray[k] = digit;
    k++;
    binary /= 10;
  }

  int amount = 0;
  for(int i = 0;i < bits;i++){
    if(bitsArray[i] == 1)amount++;
  }
  return amount;
}
void print_bits(int n){
  int onesCount = count_ones(n);
  if(n < 0)n = abs(n);
  int i = 0;
  int binary = 0;
  int ten = 1;
  while(n >= 1){
    int digit = n % 2;
    binary += ten*digit;
    ten *= 10;
    i++;
    n /= 2;
  }
  printf("\"%d (%d)\"\n",binary,onesCount);
}
