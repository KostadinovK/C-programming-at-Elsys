#include <stdio.h>
int least_significant_byte(int);
int main(){
  int res = least_significant_byte(456);
  printf("%d\n",res);
  return 0;
}
int least_significant_byte(int n){
  return n & 0xff;

}
