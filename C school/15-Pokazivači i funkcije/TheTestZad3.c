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
  float br;

  for(i=0; i<n; i++){
    if(*(pok+i) != (int)*(pok+i)){ 
      br = *(pok+i); 
      while(br != (int)br){
        br = br*10;        
        brojilo++;  
      }
      printf("\nUpisani broj %f ima %d znamenki u decimalnom dijelu.",*(pok+i), brojilo);
      brojilo=0;
    }
  }

  return;
}
