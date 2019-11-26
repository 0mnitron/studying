#include <stdio.h>
int main() {
  char a[10], zn;
  int i, ima=0;

  for(i=0; i<10; i++){
    printf("\nUpisi znak u polje: ");
    scanf(" %c", &a[i]);
  }

  printf("\nUpisi znak: ");
  scanf(" %c", &zn);

  for(i=0; i<10; i++){
    if(zn == a[i]){
      ima++;
    }
  }

  if(ima == 0){
    printf("\nNaknadno upisani znak %c se ne pojavljuje u polju.", zn);
  }else{
    printf("\nNaknado upisani znak %c se pojavljuje u polju i to %d puta.", zn, ima); 
  }

  return 0;
}
