#include <stdio.h>
struct ucenik{
  char ime[10], prezime[10];
  int uspjeh;
};
int main(){
  struct ucenik uc;

  printf("\nUpisi ime ucenika: ");
  scanf("%s", uc.ime);
  printf("\nUpisi prezime ucenika: ");
  scanf("%s", uc.prezime);
  printf("\nUpisi opci uspjeh ucenika: ");
  scanf("%d", &uc.uspjeh);

  printf("\nIme ucenika: %s", uc.ime);
  printf("\nPrezime ucenika: %s", uc.prezime);
  printf("\nOpci uspjeh: %d", uc.uspjeh);
  
  return 0;
}
