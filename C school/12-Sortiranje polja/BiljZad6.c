#include <stdio.h>
#include <string.h>
int main(){
  char slovo[100], t;
  int i, j, x[100], k;

  for(i=0; i<100; i++){
    printf("\nUpisi slovo: ");
    scanf(" %c", &slovo[i]);

    if(slovo[i] >= 'A' && slovo[i] <= 'Z'){
      x[i] = 1;
      slovo[i] = (int)slovo[i] + ('a'-'A');
    }else{
      x[i] = 0;
    }
  }

  for(i=0; i<100-1; i++){
    for(j=i+1; j<100; j++){
      if(slovo[i] < slovo[j]){
        t = slovo[i];
        slovo[i] = slovo[j];
        slovo[j] = t;

        k = x[i];
        x[i] = x[j];
        x[j] = k;
      }
    }
  }

  printf("\nVrijednosti u polju poredane po abecedi od z do a: \n");
  for(i=0; i<100; i++){
    if(x[i] == 1){
      printf("%c  ", slovo[i] - ('a'-'A'));
    }else{
      printf("%c  ", slovo[i]);
    }
  }
  
  return 0;
}
