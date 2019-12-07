#include <stdio.h>
#include <string.h>
char slova (char x, char y, char z);
int main(){
  char a, b, c, min;
  printf("\nUpisi tri mala slova: ");
  scanf(" %c %c %c", &a, &b, &c);
  min = slova(a,b,c);
  printf("\nSlovo najblize pocetku abecede je: %c", min);
  return 0;
}

char slova(char x, char y, char z){
  char min;
  min = x;
  if(y < min){
    min = y;
  }
  if(z < min){
    min = z;
  }
  return min;
}
