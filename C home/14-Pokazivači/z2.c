#include <stdio.h>
int main(){
  int i, br, parni=0, neparni=0;
  int *pokbr, *pokparni, *pokneparni;

  pokbr = &br;
  pokparni = &parni;
  pokneparni = &neparni;

  for(i=0; i<10; i++){
    printf("\nUpisi broj: ");
    scanf("%d", pokbr);

    if(*pokbr%2 == 0 && *pokbr%5==0){
      (*pokparni)++;
    }else if(*pokbr%2 != 0 && *pokbr%3 == 0){
      (*pokneparni)++;
    }
  }

  printf("\nUpisano je %d parnih brojeva djeljivih sa 5 i upisano je %d neparnih brojeva djeljivih sa 3.", *pokparni, *pokneparni);

  return 0;
}
