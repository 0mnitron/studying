#include <stdio.h>
float prosjek (int x, int y, int z);
int main(){
  int a, b, c;
  float arsr;
  printf("\nUpisi tri broja: ");
  scanf("%d %d %d", &a, &b, &c);
  arsr = prosjek(a,b,c);
  printf("\nAritmeticka sredina brojeva je: %.2f ",arsr);
  return 0;
}

float prosjek (int x, int y, int z){
  float arit;
  arit = (float)(x + y + z)/3;
  return arit;
}
