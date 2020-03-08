#include <stdio.h>
int main(){
  int a, b, c, max;
  int *poka, *pokb, *pokc;

  poka = &a;
  pokb = &b;
  pokc = &c;

  printf("\nUpisi tri broja: ");
  scanf("%d %d %d", poka, pokb, pokc);

  max = *poka;
  if(*pokb > max){
    max = *pokb;
  }
  if(*pokc > max){
    max = *pokc;
  }
  printf("\nNajveci broj je: %d", max);
  
  return 0;
}
