#include <stdio.h>
int main(){
  int i, a[100], br, sto, ima=0;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. troznamenkasti broj: ",i+1);
    scanf("%d", &a[i]);
  }
  printf("\nUpisi jednoznamenkasti broj: ");
  scanf("%d", &br);

  for(i=0; i<100; i++){
    sto = a[i] / 100;
    if(sto == br){
      ima = 1;
      break;
    }
  }

  if(ima == 1){
    printf("\nNaknadno upisani broj odgovara barem jednoj znamenci stotica brojeva iz polja.");
  }else{
    printf("\nNaknadno upisani broj ne odgovara niti jednoj znamenci stotica brojeva iz polja.");
  }

  return 0;
}
