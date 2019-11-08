#include <stdio.h>
int main(){
  int i, n, br[100],brojnik=0;
  float ars;

  printf("\nUpisi koliko zelis brojeva upisati u polje: ");
  scanf("%d", &n);

  for(i=0; i<n; i++){
    printf("\nUpisi broj: ");
    scanf("%d", &br[i]);
    brojnik = brojnik + br[i];
  }

  ars = (float)brojnik/n;

  printf("\nBrojevi veci od aritmeticke sredine upisanih brojeva: ");
  for(i=0; i<n; i++){
    if(ars < br[i]){
      printf("\n%d ",br[i]);
    }
  }
  return 0;
}
