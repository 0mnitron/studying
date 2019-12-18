#include <stdio.h>
int main(){
  int br[100], i, j, t;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj u polje: ",i+1);
    scanf("%d", &br[i]);
  }

  for(i=0; i<100-1; i++){
    if(i<33){
      for(j=i+1; j<33; j++){
        if(br[i] > br[j]){
          t = br[i];
          br[j] = br[i];
          br[j] = t;
        }
      }
    }else if(i<66){
      for(j=i+1; j<66; j++){
        if(br[i] < br[j]){
          t = br[i];
          br[i] = br[j];
          br[j] = t;
        }
      }
    }else{
      for(j=i+1; j<100; j++){
        if(br[i] > br[j]){
          t = br[i];
          br[i] = br[j];
          br[j] = t;
        }
      }
    }
  }

  printf("\nSortirani brojevi: \n");
  for(i=0; i<100; i++){
    printf("%d ",br[i]);
  }
  
  return 0;
}
