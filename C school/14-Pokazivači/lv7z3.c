#include <stdio.h>
int main(){
  int i, br[10], parni=0, neparni=0;
  int *pok;

  pok = &br[0];
  for(i=0; i<10; i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%d", pok+i);
  }

  for(i=0; i<10; i++){
    if(*(pok+i)%2 == 0 && *(pok+i)%5 == 0){
      parni++;
    }
    else if(*(pok+i)%2 != 0 && *(pok+i)%3 == 0){
      neparni++;
    }
  }

  printf("\nNeparnih brojeva djeljivih sa 3 je: %d", neparni);
  printf("\nParnih brojeva djeljivih sa 5 je: %d", parni);

  return 0;
}
