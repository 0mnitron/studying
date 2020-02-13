#include <stdio.h>
#include <string.h>
void predzadnja(char *pok, int n);
int main(){
  char rec[100], *pokrec;
  int n;

  pokrec = &rec[0];
  printf("\nUpisi recenicu: ");
  gets(pokrec);
  n = strlen(pokrec);

  predzadnja(pokrec, n);

  return 0;
}

void predzadnja(char *pok, int n){
  int i, raz=0, ukRaz=0;

  for(i=0; i<n; i++){
    if(*(pok+i) == ' '){
      ukRaz++;
    }
  }

  printf("\nPredzadnja rijec je: \n");

  for(i=0; i<n; i++){
    if(*(pok+i) == ' '){
      raz++;
    }
    if(*(pok+i) != ' ' && raz == ukRaz-1){
      printf("%c", *(pok+i));
    }
  }

  return;
}
