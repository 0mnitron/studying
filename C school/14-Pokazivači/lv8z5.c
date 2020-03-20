#include <stdio.h>
int main(){
  int a, b, i, djel1, djel2, maxDjel;
  int *poka, *pokb;

  poka = &a;
  pokb = &b;

  printf("\nUpisi dva prirodna broja: ");
  scanf("%d %d", poka, pokb);

  for(i=1; i<100; i++){
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
