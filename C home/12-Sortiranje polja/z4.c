#include <stdio.h>
int main(){
  int br[10], i, t;

  for(i=0; i<10; i++){
    printf("\nUpisi broj: ");
    scanf("%d", &br[i]);
  }

  for(i=0; i<10-1; i+=2){
    if(br[i] > br[i+1]){
      t = br[i];
      br[i] = br[i+1];
      br[i+1] = t;
    }
  }
  printf("\nNovo sortirano polje: ");
  for(i=0; i<10; i++){
    printf("\n%d", br[i]);
  }

  return 0;
}
