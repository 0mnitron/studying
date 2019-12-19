#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], t;
  int i, j, n, raz=0, poc, kraj;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=n; i>=0; i--){
    if(rec[i] == ' '){
      raz++;
      if(raz == 2){
        kraj = i-1;
        for(j=kraj; j>=0; j--){
          if(rec[j] == ' '){
            poc = j+1;
            break;
          }
        }
      }
    }
  }

  for(i=poc; i<kraj; i++){
    for(j=i+1; j<=kraj; j++){
      if(rec[i] < rec[j]){
        t = rec[i];
        rec[i] = rec[j];
        rec[j] = t;
      }
    }
  }

  printf("\nSortirane vrijednosti: ");
  printf("\n%s", rec);

  return 0;
}
