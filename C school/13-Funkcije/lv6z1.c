#include <stdio.h>
void sred(int x, int y, int z);
int main(){
  int a, b, c;

  printf("\nUpisi tri broja: ");
  scanf("%d %d %d", &a, &b, &c);
  sred(a,b,c);
  
  return 0;
}

void sred(int x, int y, int z){
  float arsr;
  arsr = (float)(x+y+z)/3;
  printf("\nAritmeticka sredina upisanih brojeva je: %.2f", arsr);
  
  return;
}
