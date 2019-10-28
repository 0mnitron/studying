#include <stdio.h>
int main(){
  int i,n;
  float art,br,zbroj=0;
  printf("\nUpisi koliko zelis brojeva upisati: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++){
    printf("\nUpisi broj: ");
    scanf("%f",&br);
    zbroj=zbroj+br;
  }
  art=(float)zbroj/n;
  printf("\nAritmeticka sredina upisanih brojeva je: %.2f",art);
  return 0;
}
