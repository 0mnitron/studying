#include <stdio.h>
int kub (int x);
int main(){
  int br,k;
  printf("\nUpisi broj: ");
  scanf("%d", &br);
  k = kub(br);
  printf("\nKub upisanog broja %d je: %d",br, k);
  return 0;
}

int kub(int x){
  int rez;
  rez = x*x*x;
  return rez;
}
