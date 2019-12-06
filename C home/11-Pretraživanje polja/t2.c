#include <stdio.h>
int main(){
  int i, j, a[10], br, ima=0;

  for(i=0; i<10; i++){
    printf("\nUpisi %d. prirodni broj u polje: ",i+1);
    scanf("%d", &a[i]);
  }

  printf("\nUpisi jos jedan prirodan broj: ");
  scanf("%d", &br);

  for (i=0; i<10; i++){
    for (j=2; j<=a[i]/2; j++){
        if(a[i]%j != 0 && a[i] == br){
          ima = 1;
          break;
        }
    }
  }

  if(ima == 1){
    printf("\nNaknadno upisani broj %d odgovara jednom od prostih brojeva iz polja.", br);
  }else{
    printf("\nNaknadno upisani broj %d ne odgovara niti jednom od prostih brojeva iz polja.", br);
  }

  return 0;
}
