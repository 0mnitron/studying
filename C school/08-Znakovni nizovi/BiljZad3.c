#include <stdio.h>
#include <string.h>
int main(){
  char rec[100];
  int i, n;

  printf("\nUpisi recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
    if(rec[i]==' '){
      printf("\n");
    }else{
      printf("%c",rec[i]);
    }
  }
  
  return 0;
}
