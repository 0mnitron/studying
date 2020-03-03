#include <stdio.h>
int main(){
  char znak[100], zn;
  int i, ima=0;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. znak u polje: ", i+1);
    scanf(" %c", &znak[i]);
  }

  printf("\nUpisi jos jedan znak: ");
  scanf(" %c", &zn);

  for(i=0; i<100; i++){
    if(zn == znak[i]){
      ima++;
    }
  }

  if(ima != 0){
    printf("\nTrazeni znak se pojavljuje u polju i to %d puta.", ima);
  }else{
    printf("\nTrazeni znak se ne pojavljuje u polju.");
  }

  return 0;
}
