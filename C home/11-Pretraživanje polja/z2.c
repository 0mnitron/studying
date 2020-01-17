#include <stdio.h>
int main(){
  int i, j, prost=0, br[4], ima=0, br1;

  for(i=0; i<4; i++){
    printf("\nUpisi cijeli broj: ");
     scanf("%d",&br[i]);
  }

  printf("\nUpisi cijeli broj: ");
  scanf("%d", &br1);
  
  for(i=0; i<4; i++){
    for(j=2; j<=br[i]/2; j++){
      if(br[i]%j==0){
        prost=1;
        break;
      }
    }
  
    if(prost==0 && br[i] == br1){
      ima = 1;
      break;
    }
  }

  if(ima == 1){
    printf("\nNaknadno upisani broj odgovara jednom od prostih brojeva iz polja.");
  }else{
    printf("\nNaknadno upisani broj ne odgovara niti jednom od prostih brojeva iz polja.");
  }
  return 0;
}
