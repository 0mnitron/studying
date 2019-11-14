#include <stdio.h>
#include <string.h>
int main(){
  char rec[100];
  int n, i, raz=0;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
    if(rec[i] == ' '){
      raz++;
    }
    if(raz == 2){
      printf("%c", rec[i]);
    }
  }
  
  return 0;
}
