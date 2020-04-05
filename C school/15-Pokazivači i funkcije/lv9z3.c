#include <stdio.h>
#include <string.h>
void usporedba(char *pok, int n);
int main(){
  char rec[100];
  char *pok;
  int n;

  pok = &rec[0];
  printf("\nUpisi recenicu: ");
  gets(pok);
  n = strlen(pok);
  usporedba(pok, n);
  return 0;
}

void usporedba(char *pok, int n){
  int i, velika=0, mala=0;

  for(i=0; i<n; i++){
    if(*(pok+i) >= 'A' && *(pok+i) <= 'Z'){
      velika++;
    }
    else if(*(pok+i) >= 'a' && *(pok+i) <= 'z'){
      mala++;
    }
  }

  if(velika > mala){
    printf("\nU recenici ima vise velikih slova.");
  }else if(mala > velika){
    printf("\nU recenici ima vise malih slova.");
  }else{
    printf("\nU recenici se nalazi jednak broj velikih i malih slova.");
  }
  return;
}
