#include <stdio.h>
int main(){
  char zn, *pokzn;
  int i, br=0, *pokbr;

  pokzn = &zn;
  pokbr = &br;

  for(i=0; i<10; i++){
    printf("\nUpisi %d. znak: ",i+1);
    scanf(" %c", pokzn);

    if(*pokzn>='0' && *pokzn<='9'){
      (*pokbr)++;
    }
  }

  printf("\nUpisano je %d. znamenki.", *pokbr);

  return 0;
}
