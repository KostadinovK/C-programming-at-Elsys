#include <stdio.h>
#include <stdlib.h>

float price(float, float);

int main(int argc, char** argv){
  int size = atoi(argv[1]);
  float pricesPerKg[size];
  float productKg[size];
  int index = 0;
  float result = 0;

  for(int i = 2;i <= size+1;i++){
    pricesPerKg[index] = atof(argv[i]);
    index++;
  }

  index = 0;
  for(int i = size+2;i < argc;i++){
    productKg[index] = atof(argv[i]);
    index++;
  }

  for(int i = 0;i < size;i++){
    result += price(productKg[i], pricesPerKg[i]);
  }

  printf("result = %f\n",result);

  return 0;
}

float price(float amount,float price_per_kg){
  return amount*price_per_kg;

}
