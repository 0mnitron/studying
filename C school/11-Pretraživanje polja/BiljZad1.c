#include <stdio.h>
int main(){
  int i, br, ima=0, a[100];

  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%d", &a[i]);
  }

  printf("\nUpisi 101. broj: ");
  scanf("%d", &br);

  for(i=0; i<100; i++){
    if(a[i] == br){
      ima = 1;
      break;
    }
  }

  if(ima == 1){
    printf("\nNaknadno upisani broj se pojavljuje u polju.");
  }else{
    printf("\nNaknadno upisani broj se ne pojavljuje u polju.");
  }

  return 0;
}
