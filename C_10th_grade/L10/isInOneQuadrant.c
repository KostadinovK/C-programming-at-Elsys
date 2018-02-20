#include <stdio.h>
int one_quadrant(float,float,float);
int one_quadrant_all(float[],int);
int main(){
  float center_x = 3.0;
  float center_y = 3.0;
  float radius = 2.0;
  int res = one_quadrant(center_x,center_y,radius);
  printf("%d\n",res);
  int size = 15;
  float circles[15];


  return 0;
}

int one_quadrant(float center_x,float center_y,float radius){
  if(center_x >= 0 && center_y >= 0){
    if(center_x - radius < 0)return 0;
    if(center_y - radius < 0)return 0;
  }else if(center_x >= 0 && center_y <= 0){
    if(center_x - radius < 0)return 0;
    if(center_y + radius > 0) return 0;
  }else if(center_x <= 0 && center_y <= 0){
    if(center_x + radius > 0)return 0;
    if(center_y + radius > 0)return 0;
  }else if(center_x <= 0 && center_y >= 0){
    if(center_x + radius > 0)return 0;
    if(center_y - radius < 0)return 0;
  }
  return 1;
}

int one_quadrant_all(float circles[],int size){
  int i;
  for(i = 0;i < size;i+=3){
    float center_x = circles[i];
    float center_y = circles[i+1];
    float radius = circles[i+2];
    if(center_x >= 0 && center_y >= 0){
      if(center_x - radius < 0)return 0;
      if(center_y - radius < 0)return 0;
    }else if(center_x >= 0 && center_y <= 0){
      if(center_x - radius < 0)return 0;
      if(center_y + radius > 0) return 0;
    }else if(center_x <= 0 && center_y <= 0){
      if(center_x + radius > 0)return 0;
      if(center_y + radius > 0)return 0;
    }else if(center_x <= 0 && center_y >= 0){
      if(center_x + radius > 0)return 0;
      if(center_y - radius < 0)return 0;
    }
  }
  return 1;
}
