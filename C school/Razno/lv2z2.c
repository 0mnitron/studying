#include <stdio.h>
int main(){
  int x,y,z;
  float srednja;
  printf("Upisi tri broja: ");
  scanf("%d %d %d",&x,&y,&z);
  srednja = (float)(x+y+z) / 3;
  printf("Srednja vrijednost brojeva %d, %d i %d je %.3f",x,y,z,srednja);
  return 0;
}
