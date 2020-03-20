#include <stdio.h>
int main(){
  int a, b, i, djel, min;
  int *poka, *pokb;

  poka = &a;
  pokb = &b;

  printf("\nUpisi dva prirodna broja: ");
  scanf("%d %d", poka, pokb);

  min = *poka;
  if(*pokb < min){
    min = *pokb;
  }

  for(i=1; i<=min; i++){
    if(*poka%i == 0 && *pokb%i == 0){
      djel = i;
    }
  }
  
  printf("\nNajveci zajednicki djelitelj upisanih brojeva je %d", djel);

  return 0;
}
