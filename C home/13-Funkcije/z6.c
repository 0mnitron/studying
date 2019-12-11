#include <stdio.h>
char ascii(char x);
int main(){
  char zn;
  int i;

  for(i=0; i<5; i++){
    printf("\nUpisi %d. znak: ",i+1);
    scanf(" %c",&zn);

    ascii(zn);
  }
  return 0;
}

char ascii(char x){
  int zn;

  zn = (int)x;
  printf("\nAnscii kod znaka %c: %d",x, zn);

  return 0;
}
