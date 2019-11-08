#include <stdio.h>
int main(){
  int br[6], brx[6], i;

  for(i=0; i<6; i++){
    printf("\nUpisi broj: ");
    scanf("%d", &br[i]);

    brx[i] = br[i]*2;
  }

  printf("\nVrijednosti dvostruko vece od vrijednosti iz prvoga polja: ");
  for(i=0; i<6; i++){
    printf("\n%d ",brx[i]);
  }
  return 0;
}
