#include <stdio.h>
int main(){
  int a, b, c;
  int *poka, *pokb, *pokc;

  poka = &a;
  pokb = &b;
  pokc = &c;

  printf("\nUpisi dva broja: ");
  scanf("%d %d", poka, pokb);

  *pokc = *poka + *pokb;

  printf("\na = %d adresa varijable a = %x", *poka, poka);
  printf("\nb = %d adresa varijable b = %x", *pokb, pokb);
  printf("\nc = %d adresa varijable c = %x", *pokc, pokc);

  return 0;
}
