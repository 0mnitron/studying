//Obavezno pronaći kraće rješenje !!
#include <stdio.h>
int main(){
  char slovo[10], t;
  int i, j, x;

  for(i=0; i<10; i++){
    printf("\nUpisi %d. slovo: ",i+1);
    scanf(" %c", &slovo[i]);
  }

  for(i=0; i<10-1; i++){
    for(j=i+1; j<10; j++){
      if(slovo[i] > slovo[j]){
        t = slovo[i];
        slovo[i] = slovo[j];
        slovo[j] = t;
      }
    }
  }

  for(i=0; i<10; i++){
    if(slovo[i]>='a' && slovo[i]<='z'){
      x = i;
      break;
    }
  }

  for(i=0; i<x-1; i++){
    for(j=i+1; j<x; j++){ 
      if(slovo[i] < slovo[j]){  //od z do a
        t = slovo[i];
        slovo[i] = slovo[j];
        slovo[j] = t;
      }
    }
  }

  for(i=x; i<10-1; i++){
    for(j=i+1; j<10; j++){
      if(slovo[i] > slovo[j]){  //od a do z
        t = slovo[i];
        slovo[i] = slovo[j];
        slovo[j] = t;
      }
    }
  }

  printf("%d",x);
  printf("\nSortirane vrijednosti: \n");
  for(i=0; i<10; i++){
    printf("%c ",slovo[i]);
  }

  return 0;
}
