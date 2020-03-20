#include <stdio.h>
int main(){
  char a, b, c, t;
  char *poka, *pokb, *pokc;

  poka = &a;
  pokb = &b;
  pokc = &c;

  printf("\nUpisi tri mala slova: ");
  scanf(" %c %c %c", poka, pokb, pokc);

  if(*poka > *pokb){
    t = *poka;
    *poka = *pokb;
    *pokb = t;
  }

  if(*pokb > *pokc){
    t = *pokb;
    *pokb = *pokc;
    *pokc = t;
  }

  if(*poka > *pokb){
    t = *poka;
    *poka = *pokb;
    *pokb = t;
  }

  printf("\nUpisana slova poslozena po abecedi: %c %c %c", *poka, *pokb, *pokc);

  return 0;
}
