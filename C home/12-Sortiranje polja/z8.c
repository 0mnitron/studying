#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], t;
  int i, j, n, kraj;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
    if(rec[i] == ' '){
      kraj = i;
      break;
    }
  }

  for(i=0; i<kraj-1; i++){
    for(j=i+1; j<kraj; j++){
      if(rec[i] > rec[j]){
        t = rec[i];
        rec[i] = rec[j];
        rec[j] = t;
      }
    }
  }

  printf("\nSortirana recenica je: ");
  printf("%s", rec);

  return 0;
}
