#include <stdio.h>
int main(){
  float br[100], *pok, arsr;
  int i, des, sto, tis;

  pok = &br[0];
  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%f", pok+i);
  }

  for(i=0; i<100; i++){
    if(*(pok+i) != (int)*(pok+i)){
      tis = (int)(*(pok+i)*1000)%10;
      sto = (int)(*(pok+i)*100)%10;
      des = (int)(*(pok+i)*10)%10;
      arsr = (float)(tis+sto+des)/3;
      printf("\nAritmeticka sredina znamenki desetnina, stotnina i tisucnina broja %f je %.2f", *(pok+i), arsr);
    }
  }

  return 0;
}
