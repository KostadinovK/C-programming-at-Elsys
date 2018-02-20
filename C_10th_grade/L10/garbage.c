#include <stdio.h>
typedef struct{
  float quantity;
  char type;
  int isDangerous;
}garbage_t;

float load_garbage_truck(garbage_t[5]);
int main(){
  garbage_t garbages[5];
  garbages[0].quantity = 0.3;
  garbages[0].type = 'L';
  garbages[0].isDangerous = 0;
  garbages[1].quantity = 0.1;
  garbages[1].type = 'G';
  garbages[1].isDangerous = 0;
  garbages[2].quantity = 0.1;
  garbages[2].type = 'B';
  garbages[2].isDangerous = 1;
  garbages[3].quantity = 0.3;
  garbages[3].type = 'B';
  garbages[3].isDangerous = 1;
  garbages[4].quantity = 0.1;
  garbages[4].type = 'P';
  garbages[4].isDangerous = 0;
  float res = load_garbage_truck(garbages);
  printf("%f\n",res);
  return 0;
}

float load_garbage_truck(garbage_t garbages[5]){
  int i;
  float sum=0;
  for(i = 0;i < 5;i++){
    if(garbages[i].isDangerous == 0){
      sum += garbages[i].quantity;
    }
  }
  return sum;

}
