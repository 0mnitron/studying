#include <stdio.h>
#include <string.h>
int main(){
  char rec[100];
  int i, n, mala=0, velika=0;

  printf("\nUpisi recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
    if(rec[i] >= 'A' && rec[i] <= 'Z'){
      velika++;
    }
    if(rec[i] >= 'a' && rec[i] <= 'z'){
      mala++;
    }
  }

  if(velika > mala){
    printf("\nUpisano je vise velikih slova.");
  }else if(velika < mala){
    printf("\nUpisano je vise malih slova.");
  }else{
    printf("\nUpisano je jednako velikih i malih slova.");
  }
  return 0;
}
