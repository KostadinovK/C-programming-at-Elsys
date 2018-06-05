#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int chordsID[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
// C Cm D Dm E F Fm G Gm A Am B
int get_chord_id(char*);
char* get_chord_by_id(int);
void transpone(char*,int);
int main(){

  char* chord = "Cm";
  transpone(chord,5);
  transpone(chord,-4);
  transpone(chord,13);
  return 0;
}
int get_chord_id(char* chord){
  if(strcmp(chord,"C") == 0){
    return 0;
  }else if(strcmp(chord,"Cm")==0){
    return 1;
  }else if(strcmp(chord,"D")==0){
    return 2;
  }else if(strcmp(chord,"Dm")==0){
    return 3;
  }else if(strcmp(chord,"E")==0){
    return 4;
  }else if(strcmp(chord,"F")==0){
    return 5;
  }else if(strcmp(chord,"Fm")==0){
    return 6;
  }else if(strcmp(chord,"G")==0){
    return 7;
  }else if(strcmp(chord,"Gm")==0){
    return 8;
  }else if(strcmp(chord,"A")==0){
    return 9;
  }else if(strcmp(chord,"Am")==0){
    return 10;
  }else{
    return 11;
  }
}
char* get_chord_by_id(int id){
  char* chord;
  switch(id){
    case 0:
      chord = "C";
      break;
    case 1:
      chord = "Cm";
      break;
    case 2:
      chord = "D";
      break;
    case 3:
      chord = "Dm";
      break;
    case 4:
      chord = "E";
      break;
    case 5:
      chord = "F";
      break;
    case 6:
      chord = "Fm";
      break;
    case 7:
      chord = "G";
      break;
    case 8:
      chord = "Gm";
      break;
    case 9:
      chord = "A";
      break;
    case 10:
      chord = "Am";
      break;
    case 11:
      chord = "B";
      break;
  }
  return chord;
}
void transpone(char* chord, int with){
  int id = get_chord_id(chord);
  id += with;

  if(id > 11){
    id = id - 12;
  }
  if(id < 0){
    id = abs(id);
    id = 12-id;
  }
  printf("%s\n",get_chord_by_id(id));
}
