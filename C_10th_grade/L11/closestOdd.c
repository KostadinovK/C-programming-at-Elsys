#include <stdio.h>
int closest_odd(int);
int main(){
  int res = closest_odd(40);
  printf("%d\n",res);
  return 0;
}
int closest_odd(int n){
  return n | 1;

}
