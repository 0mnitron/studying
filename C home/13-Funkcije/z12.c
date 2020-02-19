#include <stdio.h>
void znakovi(char x);
int main(){
  char zn;

  printf("\nUcitaj znak: ");
  scanf(" %c", &zn);
  while(zn != '0'){
    znakovi(zn);

    printf("\nUcitaj znak: ");
    scanf(" %c", &zn);
  }

  return 0;
}

void znakovi(char x){

  if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')){
    printf("\nUpisani znak %c je slovo.", x);
  }
  else if(x >= '1' && x <= '9'){
    printf("\nUpisani znak %c je broj.", x);
  }
  else{
    printf("\nUpisan je neki drugi znak %c", x);
  }

  return;
}
