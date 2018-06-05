#include <stdio.h>

typedef struct {
  double x;
  double y;
}point_t;

typedef struct {
  point_t upper_left_corner;
  double width;
  double height;
}rect_t;

int contains(rect_t, point_t);

int main(){
  point_t p1 = {2,3};
  point_t p2 = {2,2};
  point_t p3 = {0,2};
  point_t p4 = {5,5};
  point_t p5 = {12,6};

  point_t rect_corner = {1,4};
  rect_t rect = {rect_corner,3,3};

  printf("%d\n",contains(rect,p1));
  printf("%d\n",contains(rect,p2));
  printf("%d\n",contains(rect,p3));
  printf("%d\n",contains(rect,p4));
  printf("%d\n",contains(rect,p5));
  return 0;
}

int contains(rect_t rect, point_t point){
  point_t upper_right_corner = {rect.upper_left_corner.x + rect.width, rect.upper_left_corner.y};
  point_t down_left_corner = {rect.upper_left_corner.x, rect.upper_left_corner.y - rect.height};
  if(point.x >= rect.upper_left_corner.x && point.x <= upper_right_corner.x && point.y <= rect.upper_left_corner.y && point.y >= down_left_corner.y){
    return 1;
  }
  return 0;
}
