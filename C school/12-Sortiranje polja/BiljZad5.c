#include <stdio.h>
int main(){
  int i, j;
  float br[100], t;

  for(i=0; i<100; i++){
    do{
      printf("\nUpisi troznamenkasti cijeli broj: ");
      scanf("%f", &br[i]);
    }while((int)br[i] != br[i] || (br[i] < 100 && br[i] > 999));
  }

  for(i=0; i<100-1; i++){
    for(j=i+1; j<100; j++){
      if( ((int)br[i]%100/10) > ((int)br[j]%100/10) ){
        t = br[i];
        br[i] = br[j];
        br[j] = t;
      }
    }
  }

  printf("\nVrijednosti u polju sortiranje po velicini desetica od najmanje do najvece: \n");
  for(i=0; i<100; i++){
    printf("%.0f  ", br[i]);
  }

  return 0;
}
