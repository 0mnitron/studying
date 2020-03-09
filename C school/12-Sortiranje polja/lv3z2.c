#include <stdio.h>
int main(){
  int br[6], i, j, t;

  for(i=0; i<6;i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%d", &br[i]);
  }

  for(i=0; i<3-1; i++){
    for(j=i+1; j<3; j++){
      if(br[i] > br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  for(i=3; i<6-1; i++){
    for(j=i+1; j<6; j++){
      if(br[i] < br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nSortirane vrijednosti: \n");
  for(i=0; i<6; i++){
    printf("%d ", br[i]);
  }

  return 0;
}
