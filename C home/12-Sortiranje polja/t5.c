#include <stdio.h>
int main(){
  float br[100], t;
  int i, j;

  for(i=0; i<10; i++){
    printf("\nUpisi %d. realni broj u polje: ",i+1);
    scanf("%f", &br[i]);
  }

  for(i=0; i<10-1; i++){
    for(j=i+1; j<10; j++){
      if( (int)(br[i]*1000)%10 < (int)(br[j]*1000)%10 ){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nSortirani brojevi: \n");
  for(i=0; i<10; i++){
    printf("%f ",br[i]);
  }

  return 0;
}
