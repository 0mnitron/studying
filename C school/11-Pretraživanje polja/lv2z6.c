#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], zn;
  int i, j, n, raz=0, poc, kraj, ima=0;

  printf("\nUpisi recenicu: ");
  gets(rec);
  n = strlen(rec);
  printf("\nUpisi znak: ");
  scanf(" %c", &zn);

  for(i=0; i<n; i++){
    if(rec[i] == ' '){
      raz++;
    }
    if(rec[i] == zn){
      ima = raz;
      raz = 0;
      break;
    }
  }
  
  if(ima == 0){
    poc = 0;
    for(i=0; i<n; i++){
      if(rec[i] == ' '){
        kraj = i-1;
        break;
      }
    }
  }
  else{
    for(i=0; i<n; i++){
      if(rec[i] == ' '){
        raz++;
        if(raz == ima){
          poc = i+1;
          for(j=poc; j<=n; j++){
            if(rec[j] == ' ' || rec[j] == '\0'){
              kraj = j-1;
              break;
            }
          }
        }
      }
    }
  }

  printf("\nRijec u kojoj se prvi puta pojavljuje naknadno upisano slovo: \n");
  for(i=poc; i<=kraj; i++){
    printf("%c", rec[i]);
  }

  return 0;
}
