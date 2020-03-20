#include <stdio.h>
int main(){
  int br, i, prost=0;
  int *pok;

  pok = &br;
  printf("\nUpisi prirodan broj: ");
  scanf("%d", pok);

  for(i=2; i<=*pok/2; i++){
    if(*pok%i == 0){
      prost = 1;
      break;
    }
  }

  if(prost == 0){
    printf("\nBroj %d je prosti broj.",*pok);
  }else{
    printf("\nBroj %d nije prosti broj.",*pok);
  }

  return 0;
}
