#include <stdio.h>
int main(){
  int br[100],i,max;

  printf("\nUpisi %d. broj: ",1);
  scanf("%d",&br[0]);
  max = br[0];

  for(i=1; i<100; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%d",&br[i]);

    if(br[i] > max){
      max = br[i];
    }
  }

  printf("\nNajveci upisani broj je broj %d ",max);
  return 0;
}
