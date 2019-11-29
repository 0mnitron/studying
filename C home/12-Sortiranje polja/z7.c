#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], t;
  int i, j, n, poc=0;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=n; i>=0; i--){
    if(rec[i] == ' '){
      poc = i+1;
      break;
    }
  }

  for(i=poc; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(rec[i] < rec[j]){
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
