#include <stdio.h>
struct proizvod{
  char naziv[15];
  float cijena;
  int kol;
};
int main(){
  struct proizvod p[100];
  int i, n;
  float zbr=0;

  printf("\nUpisi koliko proizvoda zelis kupiti: ");
  scanf("%d", &n);

  for(i=0; i<n; i++){
    printf("\nUpisi naziv proizvoda, njegovu cijenu i kolicinu: ");
    scanf("%s %f %d", p[i].naziv, &p[i].cijena, &p[i].kol);
    zbr = zbr + ( p[i].cijena * p[i].kol);
  }

  printf("\nOdabrani proizvodi: ");
  for(i=0; i<n; i++){
    printf("\n\t%s (x%d) %.2fkn", p[i].naziv, p[i].kol, p[i].cijena);
  }
  printf("\nUkupno za platiti: %.2fkn", zbr);
  return 0;
}
