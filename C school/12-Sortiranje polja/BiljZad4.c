#include <stdio.h>
int main(){
  int i, j;
  float br[10], t;

  for(i=0; i<10; i++){
    printf("\nUpisi realni broj: ");
    scanf("%f", &br[i]);
  }

  for(i=0; i<10-1; i++){
    for(j=i+1; j<10; j++){
      if(br[i]-(int)br[i] > br[j]-(int)br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nVrijednosti u polju po velicini decimalnog ostatka od najmanjeg prema najvecem: \n");
  for(i=0; i<10; i++){
    printf("%f ", br[i]);
  }

  return 0;
}
