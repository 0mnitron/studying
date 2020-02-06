#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], *pokrec;
  int i, n, ukRaz=0, raz=0;

  pokrec = &rec[0];
  printf("\nUpisi recenicu: ");
  gets(pokrec);
  n = strlen(pokrec);

  for(i=0; i<n; i++){
    if(*(pokrec+i) == ' '){
      ukRaz++;
    }
  }

  printf("\nPredzadnja rijec: \n");

  for(i=0; i<n; i++){
    if(*(pokrec+i) == ' '){
      raz++;
    }
    if(raz == ukRaz-1 && *(pokrec+i)!= ' '){
      printf("%c", *(pokrec+i));
    }
  }

  return 0;
}
