#include <stdio.h>
void aritmeticka(int x);
int main(){
  int br, i;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. troznamenkasti cijeli broj: ", i+1);
    scanf("%d", &br);
    aritmeticka(br);
  }
  return 0;
}

void aritmeticka(int x){
  int sto, des, jed, zbroj=0, k=0;
  float arsr;

  sto = x/100;
  des = x%100/10;
  jed = x%10;

  if(sto%2 != 0){
    k++;
    zbroj = zbroj + sto;
  }
  if(des%2 != 0){
    k++;
    zbroj = zbroj + des;
  }
  if(jed%2 != 0){
    k++;
    zbroj = zbroj + jed;
  }

  arsr = (float)zbroj/k;
  printf("\nAritmeticka sredina neparnih znamenki upisanog broja je: %.2f", arsr);
  
  return;
}
