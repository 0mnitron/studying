#include <stdio.h>
int main(){
  int a, b, i, djel1, djel2, maxDjel, min;
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
    if(*poka%i == 0){
      djel1 = i;
    }
    if(*pokb%i == 0){
      djel2 = i;
    }
    if(djel1 == djel2){
      maxDjel = djel1;
    }
  }
  
  printf("\nNajveci zajednicki djelitelj upisanih brojeva je %d", maxDjel);

  return 0;
}
