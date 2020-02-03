#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], *pokrec;
  int i, n;

  pokrec = &rec[0];
  printf("\nUpisi recenicu: ");
  gets(pokrec);
  n = strlen(pokrec);

  for(i=0; i<n; i++){
    if(*(pokrec+i) >= 'A' && *(pokrec+i)<= 'Z'){
      *(pokrec+i) = *(pokrec+i) + ('a'-'A');
    }
    else if(*(pokrec+i)>= 'a' && *(pokrec+i)<= 'z'){
      *(pokrec+i) = *(pokrec+i) - ('a'-'A');
    }
  }

  printf("\nRecenica sa zamjenjenim velikim i malim slovima: ");
  printf("\n%s", pokrec);
  
  return 0;
}
