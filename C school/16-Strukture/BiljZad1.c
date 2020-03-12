#include <stdio.h>
struct ucenik{
  char ime[10];
  int ocj;
};
int main(){
  struct ucenik uc1, uc2, uc3, max;
  printf("\nUpisi ime i ocjenu za 1. ucenika: ");
  scanf("%s %d", uc1.ime, &uc1.ocj);
  printf("\nUpisi ime i ocjenu za 2. ucenika: ");
  scanf("%s %d", uc2.ime, &uc2.ocj);
  printf("\nUpisi ime i ocjenu za 3. ucenika: ");
  scanf("%s %d", uc3.ime, &uc3.ocj);

  max = uc1;
  if(uc2.ocj > max.ocj){
    max = uc2;
  }
  if(uc3.ocj > max.ocj){
    max = uc3;
  }

  printf("\nNajvisu ocjenu ima %s (ocjena: %d)", max.ime, max.ocj);
  
  return 0;
}
