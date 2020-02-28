#include <stdio.h>
float aritmeticka(int x, int n);
int main(){
  int n, i, br, zbroj=0;
  float arsr;

  printf("\nUpisi koliko brojeva zelis upisati: ");
  scanf("%d", &n);

  for(i=0; i<n; i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%d", &br);
    zbroj = zbroj + br;
  }
  arsr = aritmeticka(zbroj, n);
  printf("\nAritmeticka sredina upisanih brojeva je: %.2f", arsr);

  return 0;
}

float aritmeticka(int x, int n){
  float arsr;
  arsr = (float)x / n;
  return arsr;
}
