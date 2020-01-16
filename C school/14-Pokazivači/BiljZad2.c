#include <stdio.h>
int main(){
  float a, b, c, dec1, dec2, dec3, maxDec, max;
  float *poka, *pokb, *pokc;

  poka = &a;
  pokb = &b;
  pokc = &c;

  printf("\nUpisi tri realna broja: ");
  scanf("%f %f %f", poka, pokb, pokc);

  dec1 = *poka - (int)*poka;
  dec2 = *pokb - (int)*pokb;
  dec3 = *pokc - (int)*pokc;

  maxDec = dec1;
  max = *poka;
  if(dec2 > maxDec){
    maxDec = dec2;
    max = *pokb;
  }
  if(dec3 > maxDec){
    maxDec = dec3;
    max = *pokc;
  }

  printf("\nBroj s najvecim decimalnim dijelom je broj %f", max);

  return 0;
}
