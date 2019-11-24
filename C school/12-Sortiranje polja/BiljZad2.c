#include <stdio.h>
#include <string.h>
int main(){
  char slovo[100], t;
  int i, j;

  for(i=0; i<100; i++){
    printf("\nUpisi malo slovo: ");
    scanf(" %c", &slovo[i]);
  }

  for(i=0; i<100-1; i++){
    for(j=i+1; j<100; j++){
      if(slovo[i] < slovo[j]){
        t = slovo[i];
        slovo[i] = slovo[j];
        slovo[j] = t;
      }
    }
  }

  printf("\nVrijednosti u polju sortiranje po abecedi od z do a: ");
  for(i=0; i<100; i++){
    printf("%c ", slovo[i]);
  }

  return 0;
}
