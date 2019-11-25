#include <stdio.h>
int main(){
  int i, j;
  float br[100], t;

  for(i=0; i<100; i++){
    printf("\nUpisi realni broj: ");
    scanf("%f", &br[i]);
  }

  for(i=0; i<100-1; i++){
    for(j=i+1; j<100; j++){
      if(br[i]-(int)br[i] > br[j]-(int)br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nVrijednosti u polju po velicini decimalnog ostatka od najmanjeg prema najvecem: \n");
  for(i=0; i<100; i++){
    printf("%f ", br[i]);
  }

  return 0;
}
