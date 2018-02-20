#include <stdio.h>
#include <math.h>
int contains_in(float,float,float,float,int);
int contains_count(float[],int,float,float,int);
int main(){
  float x = 4;
  float y = 4;
  float center_x = 2;
  float center_y = 2;
  int radius = 4;
  int isInCircle = contains_in(x,y,center_x,center_y,radius);
  float points[4];
  points[0] = 3;
  points[1] = 3;
  points[2] = 4;
  points[3] = 4;
  int areInCircle = contains_count(points,4,center_x,center_y,radius);
  printf("%d\n",isInCircle);
  printf("%d\n",areInCircle);
  return 0;
}

int contains_in(float x,float y, float center_x,float center_y,int radius){
    if((x-center_x)*(x-center_x) + (y-center_y)*(y-center_y) <= radius*radius){
      return 1;
    }else{
      return 0;
    }
}

int contains_count(float points[],int size,float center_x,float center_y,int radius){
  int i;
  for(i = 0;i < size-1;i+=2){
    float x = points[i];
    float y = points[i+1];
    if((x-center_x)*(x-center_x) + (y-center_y)*(y-center_y) > radius*radius){
      return 0;
    }
  }
  return 1;
}
