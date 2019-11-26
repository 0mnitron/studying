#include <stdio.h>
int main(){
  char br[4], t;
  int i, j;

  printf("\nUcitaj cetveroznamenkasti broj: ");
  gets(br);

  for(i=0; i<4-1; i++){
    for(j=i+1; j<4; j++){
      if(br[i] > br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nNajmanji cetveroznamenkasti broj je: ");
  for(i=0; i<4; i++){
    printf("%c", br[i]);
  }

  return 0;
}
