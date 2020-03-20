#include <stdio.h>
int main(){
  int x, y, z, t;
  int *pokx, *poky, *pokz;

  pokx = &x;
  poky = &y;
  pokz = &z;

  printf("\nUpisi tri cijela broja: ");
  scanf("%d %d %d",pokx, poky, pokz);

  t = *pokx;
  *pokx = *poky;
  *poky = *pokz;
  *pokz = t;

  printf("\nKruzno zamjenjene vrijednosti: ");
  printf("\n%d %d %d", *pokx, *poky, *pokz);
  
  return 0;
}
