#include <stdio.h>
int is_power_of_two(int);
int main(){
  int n;
  printf("Enter n: ");
  scanf("%d",&n);
  printf("%d\n",is_power_of_two(n));
  return 0;
}

int is_power_of_two(int n){
  int res = ((n != 1) && (n&(n-1)));
  if(res == 0)return 1;
  else return 0;

}
