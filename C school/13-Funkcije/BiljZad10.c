#include <stdio.h>
void fpalindrom(float br);
int main(){
  int i;
  float br;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%f", &br);
    fpalindrom(br);
  }

  return 0;
}

void fpalindrom(float br){
  int tis,sto,des,jed;

  if(br != (int)br){
    printf("\nUpisani broj je realan broj.");
  }
  else if(br == (int)br){
    tis = (int)br/1000;
    sto = (int)br%1000/100;
    des = (int)br%100/10;
    jed = (int)br%10;

    if(tis == jed && sto == des){
      printf("\nUpisani broj %.0f je palindrom.", br);
    }else{
    printf("\nUpisani broj %.0f nije palindrom.", br);
    }
  }

  return;
}
