#include <stdio.h>
#include <string.h>
int main (){
  char rec[100], t;
  int i, j, n, ukRaz=0, raz=0;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

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
      for(j=i+1; j<n; j++){
        if(rec[i] > rec[j]){
          t = rec[i];
          rec[i] = rec[j]; 
          rec[j] = t;
        }
      }
    }
  }

  printf("\nVrijednosti zadnje rijeci u polju sortirane po abecedi od a do z: ");
  for(i=0; i<n; i++){
    printf("%c", rec[i]);
  }

  return 0;
}
