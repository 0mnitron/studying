#include <stdio.h>
void znamenke(float *pok, int n);
int main(){
  float br[100];
  float *pokbr;
  int i;

  pokbr = &br[0];

  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj u polje: ",i+1);
    scanf("%f", pokbr+i);
  }

  znamenke(pokbr, 100);

  return 0;
}

void znamenke(float *pok, int n){
  int i, brojilo=0;

  for(i=0; i<n; i++){
    if(*(pok+i) == (int)*(pok+i)){
      printf("\nUpisani cijeli broj %.0f ima ", *(pok+i)); 
      while(*(pok+i) != 0){
        *(pok+i) = (int)*(pok+i)/10;
        brojilo++;
      }
      printf("%d znamenki.",brojilo);
      brojilo=0;
    }
  }

  return;
}
