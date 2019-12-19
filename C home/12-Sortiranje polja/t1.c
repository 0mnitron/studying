#include <stdio.h>
int main(){
  int br[100], i, j, t;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%d", &br[i]);
  }

  for(i=0; i<33-1; i++){
    for(j=i+1; j<33; j++){
      if(br[i] > br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }
  for(i=33; i<66-1; i++){
    for(j=i+1; j<66; j++){
      if(br[i] < br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }
  for(i=66; i<100-1; i++){
    for(j=i+1; j<100; j++){
      if(br[i] > br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nSortirani brojevi: \n");
  for(i=0; i<100; i++){
  printf("%d ",br[i]);
  }
  
  return 0;
}
