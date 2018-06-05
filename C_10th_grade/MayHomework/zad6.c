#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  char* title;
  char* director;
  double duration; //In minutes
  double rating; // from 0 to 10 based on IMDb
}movie_t;

int rating_comparator(const void*, const void*);
int title_comparator(const void*, const void*);
void top5(movie_t*, int);

int main(){
  movie_t movies[10];
  movies[0].title = "Terminator";
  movies[0].director = "James Cameron";
  movies[0].duration = 108;
  movies[0].rating = 8;

  movies[1].title = "Rambo";
  movies[1].director = "Sylvester Stallone";
  movies[1].duration = 93;
  movies[1].rating = 7.7;

  movies[2].title = "Rocky";
  movies[2].director = "John Avlidsen";
  movies[2].duration = 122;
  movies[2].rating = 8.1;

  movies[3].title = "Die Hard";
  movies[3].director = "John McTiernan";
  movies[3].duration = 132;
  movies[3].rating = 8.2;

  movies[4].title = "Commando";
  movies[4].director = "Mark Lester";
  movies[4].duration = 92;
  movies[4].rating = 6.7;

  movies[5].title = "Over the Top";
  movies[5].director = "Menahem Golan";
  movies[5].duration = 93;
  movies[5].rating = 5.7;

  movies[6].title = "The Mask";
  movies[6].director = "Charles Russel";
  movies[6].duration = 101;
  movies[6].rating = 6.9;

  movies[7].title = "The World is Big and Salvation Lurks Around the Corner";
  movies[7].director = "Stefan Komandarev";
  movies[7].duration = 145;
  movies[7].rating = 8.1;

  movies[8].title = "Directions";
  movies[8].director = "Stefan Komandarev";
  movies[8].duration = 103;
  movies[8].rating = 7.6;

  movies[9].title = "Shawshank Redemption";
  movies[9].director = "Frank Darabont";
  movies[9].duration = 142;
  movies[9].rating = 9.3;

  movie_t movies_copy[10];
  int i;
  for(i=0;i < 10;i++){
    movies_copy[i] = movies[i];
  }
  top5(movies_copy,10);

  return 0;
}

int rating_comparator(const void* a, const void* b){
  double rating1 = ((movie_t *)a)->rating;
  double rating2 = ((movie_t *)b)->rating;
  if(rating1 == rating2)return 0;
  else if(rating1 > rating2)return -1;
  else return 1;
}

int title_comparator(const void* a, const void* b){
  char* title1 = ((movie_t *)a)->title;
  char* title2 = ((movie_t *)b)->title;
  return strcmp(title1,title2);
}

void top5(movie_t* movies, int movies_count){
  if(movies_count < 5){
    printf("Not enough movies to make top 5!");
    return;
  }
  movie_t top_movies[5];
  qsort(movies,movies_count,sizeof(movie_t),rating_comparator); //sorting descending by rating
  int i;
  for(i=0;i < 5;i++){
    top_movies[i] = movies[i];
  }
  qsort(top_movies,5,sizeof(movie_t),title_comparator); //sorting by title
  for(i=0;i<5;i++){
    printf("Title: %s\nDirector: %s\nDuration: %f\nRating: %f\n",top_movies[i].title,top_movies[i].director,top_movies[i].duration,top_movies[i].rating);
    printf("\n\n");
  }
}
