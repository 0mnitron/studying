#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], slovo, t;
  int i, j, n, poc, kraj;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  printf("\nUpisi slovo: ");
  scanf(" %c", &slovo);

  if(rec[0] == slovo){
    poc = 0;
    for(i=poc; i<=n; i++){
      if(rec[i] == ' ' || rec[i] == '\0'){
        kraj = i;
        break;
      }
    }
  }else{
    for(i=0; i<n; i++){
      if(rec[i] == slovo && rec[i-1] == ' '){
        poc = i;
        for(j=poc; j<=n; j++){
          if(rec[j] == ' ' || rec[j] == '\0'){
            kraj = j;
            break;
          }
        }
        break;
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

  printf("\nSortirana recenica: \n");
  printf("%s", rec);

  return 0;
}
