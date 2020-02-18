#include <stdio.h>
float aritmeticka(int x);
int main(){
  int br;
  float arsr;

  printf("\nUpisi troznamenkasti cijeli broj: ");
  scanf("%d", &br);
  arsr = aritmeticka(br);
  printf("\nAritmeticka sredina znamenki upisanog broja je: %.2f", arsr);

  return 0;
}

float aritmeticka(int x){
  float arit;
  int sto, des, jed;

  sto = x/100;
  des = x%100/10;
  jed = x%10;
  arit = (float)(sto+des+jed) / 3;

  return arit;
}
