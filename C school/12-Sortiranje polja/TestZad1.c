#include <stdio.h>
int main(){
  char slovo[100], t;
  int i, j, kraj;

  for(i=0; i<100; i++){
    printf("\nUpisi slovo: ");
    scanf(" %c",&slovo[i]);
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

  for(i=0; i<100; i++){
    if(slovo[i]>= 'A' && slovo[i]<= 'Z'){
      kraj = i;
      break;
    }
  }

  for(i=0; i<kraj-1; i++){
    for(j=i+1; j<kraj; j++){
      if(slovo[i] > slovo[j]){
        t = slovo[i];
        slovo[i] = slovo[j];
        slovo[j] = t;
      }
    }
  }

  for(i=kraj; i<100-1; i++){
    for(j=i+1; j<100; j++){
      if(slovo[i] < slovo[j]){
        t = slovo[i];
        slovo[i] = slovo[j];
        slovo[j] = t;
      }
    }
  }

  printf("\nSortirana slova: \n");
  for(i=0; i<100; i++){
    printf("%c ",slovo[i]);
  }

  return 0; 
}
