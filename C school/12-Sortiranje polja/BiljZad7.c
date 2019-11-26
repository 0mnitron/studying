#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], t;
  int i, j, n, poc, kraj;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
  
    if(rec[0] == 'a' || rec[0] == 'A'){
      poc = 0;
      for(j=0; j<n+1; j++){
        if(rec[j] == ' ' || rec[j] == '\0'){
          kraj = j;
          break;
        }
      }
    }

    else if(rec[i] == ' ' && (rec[i+1] == 'a' || rec[i+1] == 'A') ){
      poc = i+1;

      for(j=poc+1; j<n+1; j++){
        if(rec[j] == ' ' || rec[j] == '\0'){
          kraj = j;
          break;
        }
      }
      break;
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

  printf("\nRecenica sa slovima prve rijeci prvog slova 'a' poslozena po abecedi od z prema a: \n");
  printf("\n%s\n",rec);
  
  return 0;
}
