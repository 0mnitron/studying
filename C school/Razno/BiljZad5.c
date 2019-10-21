#include <stdio.h>
int main(){
  int ucenici,odlicni;
  float postotak;
  printf("Upisi broj ucenika i broj odlicnih ucenika: ");
  scanf("%d %d",&ucenici, &odlicni);
  postotak = (float)odlicni/ucenici*100;
  printf("Postotak odlicnih ucenika: %.2f",postotak);
  return 0;
}
