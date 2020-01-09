#include <stdio.h>
int main(){
  float br[100], t;
  int i, j;

  for(i=0; i<100; i++){
    printf("\nUpisi realni broj: ");
    scanf("%f", &br[i]);
  }

  for(i=0; i<50-1; i++){
    for(j=i+1; j<50; j++){
      if((int)(br[i]*100)%10 < (int)(br[j]*100)%10){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  for(i=50; i<100-1; i++){
    for(j=i+1; j<100; j++){
      if((int)br[i]/100 > (int)br[j]/100){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nSortirane vrijednosti: ");
  for(i=0; i<100; i++){
    printf("%.3f ",br[i]);
  }

  return 0;
}
