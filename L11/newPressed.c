#include <stdio.h>
int new_pressed(int,int);
int released(int,int);
int main(){
  int old_state,new_state;
  printf("old_state = ");
  scanf("%d",&old_state);
  printf("new_state = ");
  scanf("%d",&new_state);
  printf("new_pressed = %d\n",new_pressed(old_state,new_state));
  printf("released = %d\n",released(old_state,new_state));
  return 0;
}

int new_pressed(int old_state,int new_state){
  return old_state | new_state;
}

int released(int old_state,int new_state){
  return old_state ^ new_state;
}
