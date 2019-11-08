#include <stdio.h>
int main(){
  int i, br[7], min, max;

  printf("\nUpisi 1. broj: ");
  scanf("%d", &br[0]);
  min = br[0];
  max = br[0];

  for(i=1; i<7; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%d", &br[i]);

    if(br[i] > max){
      max = br[i];
    }
    if(br[i] < min){
      min = br[i];
    }
  }

  printf("\nNajveci upisani broj je %d, a najmanji %d ",max,min);
  return 0;
}
