#include <stdio.h>
int main(){
  int br[7], i, j, t;

  for(i=0; i<7; i++){
    printf("\nUpisi %d. cjeli broj u polje: ",i+1);
    scanf("%d", &br[i]);
  }

  for(i=0; i<7-1; i++){
    for(j=i+1; j<7; j++){
      if(br[i] < br[j]){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nBrojevi poredani od najveceg do najmanjeg su: \n");
  for(i=0; i<7; i++){
    printf("%d ", br[i]);
  }
  
  return 0;
}
