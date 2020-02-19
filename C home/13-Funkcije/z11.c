#include <stdio.h>
int najveca_znamenka(int x);
int main(){
  int br, max;

  printf("\nUpisi troznamenkasti broj: ");
  scanf("%d", &br);
  max = najveca_znamenka(br);
  printf("\nNajveca znamenka upisanog broja je: %d", max);

  return 0;
}

int najveca_znamenka(int x){
  int sto, des, jed, max;

  sto = x/100;
  des = x%100/10;
  jed = x%10;

  sto = max;
  if(des > max){
    max = des;
  }
  if(jed > max){
    max = jed;
  }
  
  return max;
}
