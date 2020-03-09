#include <stdio.h>
int main(){
  int br[10], i, t;

  for(i=0; i<10; i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%d", &br[i]);
  }

  for(i=0; i<10; i=i+2){
    if(br[i] > br[i+1]){
      t = br[i];
      br[i] = br[i+1];
      br[i+1] = t;
    }
  }

  printf("\nSortirane vrijednosti:\n");
  for(i=0; i<10; i++){
    printf("%d ",br[i]);
  }
  
  return 0;
}
