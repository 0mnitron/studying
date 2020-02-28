#include <stdio.h>
int kub(int x);
int main(){
  int br, kubb;

  printf("\nUpisi broj: ");
  scanf("%d", &br);
  kubb = kub(br);
  printf("\nKub upisanog broja je %d", kubb);

  return 0;
}

int kub(int x){
  int kubb;
  kubb = x*x*x;
  return kubb;
}
