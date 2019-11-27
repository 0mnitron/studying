#include <stdio.h>
int main(){
  int i, j, br[7], t;

  for(i=0; i<7; i++){
    printf("\nUpisi broj: ");
    scanf("%d", &br[i]);
  }

  for(i=0; i<7-1; i++){
    for(j=i+1; j<7; j++){
      if(br[i] < br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nBrojevi u polju sortirani od veceg prema manjem: ");
  for(i=0; i<7; i++){
    printf("\n%d", br[i]);
  }

  return 0;
}
