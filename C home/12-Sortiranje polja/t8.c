#include <stdio.h>
int main(){
  float br[5], t;
  int i, j;

  for(i=0; i<5; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%f", &br[i]);
  }

  for(i=0; i<5-1; i++){
    for(j=i+1; j<5; j++){
      if((int)(br[i]*1000)%10 > (int)(br[j]*1000)%10){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nVrijednosti poredane od manje prema vecoj: \n");
  for(i=0; i<5; i++){
    printf("%f ",br[i]);
  }

  return 0;
}
