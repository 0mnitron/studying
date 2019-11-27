#include <stdio.h>
int main(){
  int i, j, br[8], t;

  for(i=0; i<8; i++){
    printf("\nUpisi broj: ");
    scanf("%d", &br[i]);
  }

  for(i=0; i<5-1; i++){
    for(j=i+1; j<5; j++){
      if(br[i] > br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  for(i=5; i<8-1; i++){
    for(j=i+1; j<8; j++){
      if(br[i] < br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nPrvih pet brojeva sortirana uzlazno, a zadnja tri silazno: ");
  for(i=0; i<8; i++){
    printf("\n%d", br[i]);
  }

  return 0;
}
