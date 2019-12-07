#include <stdio.h>
int najveci (int x, int y, int z);
int main(){
  int a, b, c, max;
  printf("\nUpisi 3 broja: ");
  scanf("%d %d %d", &a, &b, &c);
  max = najveci (a,b,c);
  printf("\nNajveci od upisanih brojeva je broj %d", max);
  return 0;
}

int najveci (int x, int y, int z){
  int max = x;
  if(y > max){
    max = y;
  }
  if(z > max){
    max = z;
  }
  return max;
}
