#include <stdio.h>
#include <string.h>
void srednje(int zbr, int x);
int main(){
  char rijec[15];
  int i, n, zbroj=0;

  printf("\nUpisi rijec: ");
  scanf("%s",rijec);
  n = strlen(rijec);

  for(i=0; i<n; i++){
    zbroj = zbroj + (int)rijec[i];
  }

  srednje(zbroj, n);

  return 0;
}

void srednje(int zbr, int x){
  float arsr;

  arsr = (float)zbr/x;
  printf("\nAritmeticka sredina ASCII kodova upisane rijeci je: %.2f", arsr);

  return;
}
