#include <stdio.h>
int main(){
  char a[10], zn;
  int i , ima=0;

  for(i=0; i<10; i++){
    printf("\nUpisi %d. znak: ", i+1);
    scanf(" %c", &a[i]);
  }
  printf("\nUpisi jos jedan znak: ");
  scanf(" %c", &zn);

  for(i=0; i<10; i++){
    if(a[i] == zn){
      ima++;
    }
  }

  if(ima != 0){
    printf("\nNaknadno upisani znak %c se pojavljuje u polju %d puta.", zn, ima);
  }else{
    printf("\nNakndano upisani znak %c se ne pojavljuje u polju.", zn);
  }

  return 0;
}
