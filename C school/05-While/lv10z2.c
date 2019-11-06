#include <stdio.h>
int main(){
  int br, brojilo=0, i=1;
  
  printf("\nUpisi %d. broj: ",i);
  scanf("%d",&br);

  while(br>10 && br<20 && i<10){
    brojilo++;
    i++;
    printf("\nUpisi %d. broj: ",i);
    scanf("%d",&br);
  }
  if(br>10 && br<20){
    brojilo++;
  }
  printf("\nUčitano je %d brojeva koji su veci od 10 i manji od 20. ",brojilo);
  return 0;
}
