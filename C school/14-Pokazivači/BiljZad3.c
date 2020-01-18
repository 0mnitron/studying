#include <stdio.h>
int main(){
  char slovo;
  char *pok;
  int i, mala=0, velika=0;

  pok = &slovo;
  for(i=0; i<4; i++){
    printf("\nUpisi slovo: ");
    scanf(" %c", pok);
    if(*pok >= 'A' && *pok <= 'Z'){
      velika++;
    }
    else if(*pok >= 'a' && *pok <= 'z'){
      mala++;
    }
  }

  if(velika > mala){
    printf("\nUpisano je vise velikih slova.");
  }else if(mala > velika){
    printf("\nUpisano je vise malih slova");
  }else{
    printf("\nUpisan je jednak broj velikih i malih slova.");
  }

  return 0;
}
