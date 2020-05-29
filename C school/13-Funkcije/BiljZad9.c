#include <stdio.h>
#include <string.h>
void broj(char slovo);
int main(){
  char rec[100];
  int i,n;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
    broj(rec[i]);
  }

  return 0;
}

void broj(char slovo){
  int x;

   if(slovo >= 'A' && slovo <= 'Z'){
     x = slovo - 'A';
    printf("\nOd upisanog slova %c do pocetka abeced ima %d slova.", slovo, x);
  }

  if(slovo >= 'a' && slovo <= 'z'){
    x = 'z' - slovo;
    printf("\nOd upisanog slova %c do kraja abeced ima %d slova.", slovo, x);
  }
  
  return;
}
