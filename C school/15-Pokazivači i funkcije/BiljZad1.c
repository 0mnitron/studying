#include <stdio.h>
float aritmeticka(float *pok, int n);
int main(){
  float br[100], arsr;
  float *pokbr;
  int i;

  pokbr = &br[0];
  for(i=0; i<100; i++){
    printf("\nUpisi cijeli ili realni broj: ");
    scanf("%f", pokbr+i);
  }

  arsr = aritmeticka(pokbr, 100);
  printf("\nAritmeticka sredina cijelih djelova realnih brojeva: %.2f", arsr);

  return 0;
}

float aritmeticka(float *pok, int n){
  int i, zbroj=0, ukupno=0;
  float arit;

  for(i=0; i<n; i++){
    if(*(pok+i) != (int)*(pok+i)){
      ukupno++;
      zbroj = zbroj + (int)*(pok+i);
    }
  }

  arit = (float)zbroj/ukupno;

  return arit;
}
