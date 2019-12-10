#include <stdio.h>
float arit(int x, int y);
int main(){
  float arsr;
  int i, n, br[100], zbroj=0;

  printf("\nUpisi koliko brojeva zelis upisati u polje: ");
  scanf("%d", &n);

  for(i=0; i<n; i++){
    printf("\nUpisi %d. broj u polje: ",i+1);
    scanf("%d", &br[i]);
    zbroj = zbroj + br[i];
  }

  arsr = arit(zbroj, n);
  printf("Aritmeticka sredina upisanih brojeva je: %.2f",arsr);

  return 0;
}

float arit(int x, int y){
  float rez;

  rez = (float) x / y;

  return rez;
}
