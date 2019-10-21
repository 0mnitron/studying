#include <stdio.h>
int main(){
  int x,y,z;
  float srednja;
  x = 1;
  y = 3;
  z = 3;
  srednja = (float)(x+y+z)/3;
  printf("Srednja vrijednost brojeva %d,%d i %d je %.2f ",x,y,z,srednja);
  return 0;
} 
