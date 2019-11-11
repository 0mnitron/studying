#include <stdio.h>
#include <string.h>
int main(){
  char rec[100];
  int i, n, br_i=0, br_a=0;

  printf("\nUpisi recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
    if(rec[i] == 'a' || rec[i] == 'A'){
      br_a++;
    }
    if(rec[i] == 'i' || rec[i] == 'I'){
      br_i++;
    }
  }

  if(br_i > br_a){
    printf("\nRecenica sadrzi vise slova 'i' ");
  }
  else if(br_i < br_a){
    printf("\nRecenica sadrzi vise slova 'a' ");
  }else{
    printf("\nRecenica sadrzi jednak broj slova 'i' i slova 'a' ");
  }
  
  return 0;
}
