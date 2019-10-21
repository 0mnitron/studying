#include <stdio.h>
#include <math.h>
int main(){
  int a,o;
  float p;
  printf("\nUcitaj stranicu trokuta: ");
  scanf("%d",&a);
  o = 3*a;
  p = a*a * sqrt((float)3)/4;
  
  printf("\nOpseg trokuta je: %d",o);
  printf("\nPovrsina trokuta je: %.2f",p);
  
  return 0;
}
