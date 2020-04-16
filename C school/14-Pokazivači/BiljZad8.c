#include <stdio.h>
#include <string.h>
int main(){
  char r[20], t;
  char *pok;
  int i, j, n, x[20], k;

  pok = &r[0];
  printf("\nUcitaj rijec: ");
  scanf("%s", pok);
  n = strlen(pok);

  for(i=0; i<n; i++){
    if(*(pok+i) >= 'A' && *(pok+i) <= 'Z'){
      x[i] = 1;
      *(pok+i) = *(pok+i) + ('a'-'A');
    }
    else{
      x[i] = 0;
    }
  }

  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(*(pok+i) > *(pok+j)){
        t = *(pok+i);
        *(pok+i) = *(pok+j);
        *(pok+j) = t;

        k = x[i];
        x[i] = x[j];
        x[j] = k;
      }
    }
  }

  printf("\nSlova sortirana po abecedi: \n");
  
  for(i=0; i<n; i++){
    if(x[i] == 1){
      printf("%c", *(pok+i) - ('a'-'A'));
    }else{
      printf("%c", *(pok+i));
    }
  }
  
  return 0;
}
