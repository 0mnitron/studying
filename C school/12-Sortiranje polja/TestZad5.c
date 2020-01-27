#include <stdio.h>
#include <string.h>
int main(){
  int i, j, n, raz=0, poc=0, kraj=0;
  char rec[100], t;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
    if(rec[i] == ' '){
      raz++;
      if(raz == 1 && rec[i-1] == 'a'){
        kraj = i-1;
        break;
      }
    }
    if(rec[i] == ' ' && rec[i-1] == 'a'){
      kraj = i-1;
      for(j=kraj; j>=0; j--){
        if(rec[j] == ' '){
          poc = j+1;
          break;
        }
      }
    }
  }

  printf("%d %d", poc, kraj);

  for(i=poc; i<kraj; i++){
    for(j=i+1; j<=kraj; j++){
      if(rec[i] > rec[j]){
        t = rec[i];
        rec[i] = rec[j];
        rec[j] = t;
      }
    }
  }

  printf("\n%s", rec);

  return 0;
}
