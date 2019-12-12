#include <stdio.h>
#include <string.h>
int main(){
  int i, j, n, ukRaz=0, raz=0;
  char rec[100], t;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen (rec);

  for(i=0; i<n; i++){
    if(rec[i] == ' '){
      ukRaz++;
    }
  }

  for(i=0; i<n; i++){
    if(rec[i] == ' '){
      raz++;
    }
    if(raz == ukRaz && rec[i] != ' '){
      for(j=i+1; j<=n; j++){
        if(rec[i] < rec[j]){
          t = rec[i];
          rec[i] = rec[j];
          rec[j] = t;
        }
      }
    }
  }

  printf("\nRecenica sa sortiranim vrijednostima posljednje rijeci: \n");
  printf("%s", rec);

  return 0;
}
