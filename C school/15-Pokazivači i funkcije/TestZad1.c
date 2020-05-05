#include <stdio.h>
#include <string.h>
void sortiranje(char *pok, int n);
int main(){
  char rec[100];
  char *pokrec;
  int n;

  pokrec = &rec[0];
  
  printf("\nUcitaj recenicu: ");
  gets(pokrec);
  n = strlen(pokrec);

  sortiranje(pokrec, n);

  return 0;
}

void sortiranje(char *pok, int n){
  char mala[100], velika[100];
  int i, m=0, v=0;

  for(i=0; i<n; i++){
    if(*(pok+i) >= 'A' && *(pok+i) <= 'Z'){
      velika[v] = *(pok+i);
      v++;
    }
    else if(*(pok+i) >= 'a' && *(pok+i) <= 'z'){
      mala[m] = *(pok+i);
      m++;
    }
  }

  printf("\nVelika slova: ");
  for(i=0; i<v; i++){
    printf("%c ", velika[i]);
  }

  printf("\nMala slova: ");
  for(i=0; i<m; i++){
    printf("%c ", mala[i]);
  }
  
  return;
}
