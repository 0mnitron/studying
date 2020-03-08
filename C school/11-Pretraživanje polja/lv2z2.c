#include <stdio.h>
int main(){
  int a[6], i, br, ima=0;

  for(i=0; i<6; i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%d", &a[i]);
  }
  printf("\nUpisi jos jedan broj: ");
  scanf("%d", &br);

  for(i=0; i<6; i++){
    if(a[i] == br){
      ima++;
    }
  }

  if(ima == 0){
    printf("\nBroj %d se ne pojavljuje u polju.", br);
  }
  else if(ima%2 == 0){
    printf("\nBroj %d se pojavljuje u polju paran broj puta.", br);
  }else{
    printf("\nBroj %d se pojavljuje u polju neparan broj puta.", br);
  }

  return 0;
}
