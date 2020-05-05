#include <stdio.h>
float najveci(float *pok, int n);
int main(){
  float br[100];
  float *pokbr;
  int i, max;

  pokbr = &br[0];

  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj u polje: ",i+1);
    scanf("%f", pokbr+i);
  }

  max = najveci(pokbr, 100);

  printf("\nNajveci upisani broj je broj: %d", max);
  return 0;
}

float najveci(float *pok, int n){
  int i, max;

  for(i=0; i<n; i++){
    if(*(pok+i) == (int)*(pok+i)){
      max = (int)*(pok+i);
      break;
    }
  }

  for(i=0; i<n; i++){
    if(*(pok+i) == (int)*(pok+i)){
      if(*(pok+i) > max){
        max = (int)*(pok+i);
      }
    }
  }

  return max;
}
