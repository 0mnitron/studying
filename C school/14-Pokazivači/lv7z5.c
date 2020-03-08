#include <stdio.h>
int main(){
  char c, *pok;
  int a;

  pok = &c;
  printf("\nUpisi znak: ");
  scanf(" %c", pok);

  if(*pok == 'j'){
    a = 1;
    printf("\njedan \na = %d", a);
  }
  else if(*pok == 'd'){
    a = 2;
    printf("\ndva \na = %d", a);
  }
  else if(*pok == 't'){
    a = 3;
    printf("\ntri \na = %d", a);
  }
  else if(*pok == 'c'){
    a = 4;
    printf("\ncetiri \na = %d", a);
  }
  else if(*pok == 'p'){
    a = 5;
    printf("\npet \na = %d", a);
  }else{
    printf("\n%c", *pok);
  }

  return 0;
}
