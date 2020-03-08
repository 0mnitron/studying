#include <stdio.h>
int main(){
  int br, brojilo=0, min;
  int *pok;

  pok = &br;
  printf("\nUpisi broj: ");
  scanf("%d", pok);
  min = *pok;

  while(*pok != 0){
    if(*pok >= 10 && *pok <= 20){
      brojilo++;
    }
    if(*pok < min){
      min = *pok;
    }

    printf("\nUpisi broj: ");
    scanf("%d", pok);
  }

  printf("\nBrojeva izmedu 10 i 20 upisano je: %d", brojilo);
  printf("\nNajmanji upisani broj je: %d", min);

  return 0;
}
