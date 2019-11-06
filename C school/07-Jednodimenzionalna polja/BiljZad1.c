#include <stdio.h>
int main(){
  int br[100], i, zbroj=0;
  float ars;

  for(i=0; i<100; i++){
    printf("\nUpisi broj: ");
    scanf("%d",&br[i]);
    zbroj = zbroj + br[i];
  }

  ars = (float)zbroj/100;

  printf("\nBrojevi veci od aritmeticke sredine su: ");
  for(i=0; i<100; i++){
    if(br[i] > ars){
      printf("\n%d ",br[i]);
    }
  }

  return 0;
}
