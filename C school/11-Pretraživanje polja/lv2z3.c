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
    if(a[i] == br && i < 3){
      ima = 1;
      break;
    }
    else if(a[i] == br && i >= 3){
      ima = 2;
      break;
    }
  }

  if(ima == 0){
    printf("\nBroj %d se ne pojavljuje u polju.", br);
  }
  else if(ima == 1){
    printf("\nBroj %d se prvi put pojavljuje u prvoj polovini polja.", br);
  }else{
    printf("\nBroj %d se prvi put pojavljuje u drugoj polovini polja.", br);
  }

  return 0;
}
