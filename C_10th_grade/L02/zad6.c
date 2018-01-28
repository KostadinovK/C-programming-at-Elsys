//average note of a student
#include <stdio.h>

float average(float[]);

int main(){
   float marks[9];
   int i;
   for(i=0;i<=9;i++){
     do{
      printf("Enter marks[%d]:  ",i);
      scanf("%f",marks+i);
     }while(marks[i] > 6 || marks[i] < 2);
   }
   printf("Average: %f\n",average(marks));
   return 0;
}

float average(float marks[9]){
    int i;
    float sum=0,avr=0;
    for(i=0;i<=9;i++){
       sum = sum + marks[i];
       
    }
    avr = sum / 10;
    return avr;

}
