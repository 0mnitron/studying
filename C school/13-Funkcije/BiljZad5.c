#include <stdio.h>
#include <string.h>
char slova(char rec);
int main(){
  char rec[100], slovo;
  int i, n;
  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  printf("\nZamjenjena velika i mala slova: ");
  for(i=0; i<n; i++){
    slovo = slova(rec[i]);
    printf("%c",slovo);
  }
  return 0;
}

char slova (char rec){
  char slovo;
  if(rec >= 'A' && rec <= 'Z'){
    slovo = rec + ('a' - 'A');
  }
  else if(rec >= 'a' && rec <= 'z'){
    slovo = rec - ('a' - 'A');
  }else{
    slovo = rec;
  }
  return slovo;
}
