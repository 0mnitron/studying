#include <stdio.h>
int main(){
  int br;
  int *pok;

  pok = &br;

  printf("\nUpisi broj: ");
  scanf("%d", pok);

  if(*pok%2 != 0){
    printf("\nBroj je neparan.");
  }else{
    printf("\nBroj nije neparan.");
  }
  
  return 0;
}
