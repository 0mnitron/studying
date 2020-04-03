#include <stdio.h>
void usporedba(float *pok, int x, int n);
int main(){
  float a[6];
  float *pok;
  int i, br;

  pok = &a[0];
  for(i=0; i<6; i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%f",pok+i);
  }
  printf("\nUpisi cijeli broj: ");
  scanf("%d", &br);

  usporedba(pok, br, 6);
  return 0;
}

void usporedba(float *pok, int x, int n){
  int i, ima=0;

  for(i=0; i<n; i++){
    if((int)*(pok+i) == x){
      ima=1;
    }
  }

  if(ima == 1){
    printf("\nNaknadno upisani broj odgovara jednom od cijelih brojeva ili cijelom djelu nekog realnog broja");
  }else{
    printf("\nNaknado upisani broj se ne pojavljuje u polju.");
  }

  return;
}
