#include <stdio.h>
void savrseni(int x);
int main(){
  int n;

  printf("\nUpisi broj: ");
  scanf("%d", &n);
  savrseni(n);

  return 0;
}

void savrseni(int x){
  int i, j, zbroj=0;

  printf("\nSavrseni brojevi do ucitanog broja: \n");
  for(i=3; i<x; i++){
    for(j=1; j<i; j++){
      if(i%j == 0){
        zbroj = zbroj + j;
      }
    }

    if(i == zbroj){
      printf("\n%d", i);
    }
    zbroj = 0;
  }

  return;
}
