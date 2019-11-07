#include <stdio.h>
int main(){
  int br[100], min, jednaki=1, i;

  printf("\nUpisi 1. broj: ");
  scanf("%d",&br[0]);
  min = br[0];

  for(i=1; i<100; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%d",&br[i]);
    if(br[i] == min){
      jednaki++;
    }
    
    if(br[i] < min){
      min = br[i];
    }
  }

  if(jednaki == 100){
    printf("\nUpisani su svi isti brojevi.");
  }
  printf("\nNajmanji broj je: %d",min);
  return 0;
}
