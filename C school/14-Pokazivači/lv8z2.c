#include <stdio.h>
int main(){
  int a, b, c, min;
  int *poka, *pokb, *pokc;

  poka = &a;
  pokb = &b;
  pokc = &c;

  printf("\nUpisi tri cijela broja: ");
  scanf("%d %d %d", poka, pokb, pokc);

  min = *poka;
  if(*poka == *pokb && *poka == *pokc){
    printf("\nUpisana su tri ista broja.");
  }
  
  if(*pokb < min){
    min = *pokb;
  }
  if(*pokc < min){
    min = *pokc;
  }

  printf("\nNajmanji upisani broj je broj: %d", min);

  return 0;
}
