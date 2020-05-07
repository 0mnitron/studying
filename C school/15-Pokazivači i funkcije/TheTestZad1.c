#include <stdio.h>
#include <string.h>
void zamjena(char *pok, int n);
int main(){
  char rec[100];
  char *pok;
  int n;
  pok = &rec[0];
  printf("\nUpisi recenicu: ");
  gets(pok);
  n = strlen(pok);
  zamjena(pok, n);
  return 0;
}
void zamjena(char *pok, int n){
  char p[100];
  int i;
  for(i=0; i<n; i++){
    if(*(pok+i) >= 'A' && *(pok+i) <= 'Z'){
      p[i] = *(pok+i) + ('a'- 'A');
    }
    else if(*(pok+i) >= 'a' && *(pok+i) <= 'z'){
      p[i] = *(pok+i) - ('a'- 'A');
    }else{
      p[i] = *(pok+i);
    }
  }
  printf("\nUpisana recenica:\n");
  for(i=0; i<n; i++){
    printf("%c", *(pok+i));
  }

  printf("\nZamjenjena slova u recenici:\n");
  for(i=0; i<n; i++){
    printf("%c", p[i]);
  }
  return;
}
