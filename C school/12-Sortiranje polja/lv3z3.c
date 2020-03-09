#include <stdio.h>
int main(){
  char a[10], t;
  int i,j;

  for(i=0; i<10; i++){
    printf("\nUpisi %d. slovo: ", i+1);
    scanf(" %c", &a[i]);
  }

  for(i=0; i<10-1; i++){
    for(j=i+1; j<10; j++){
      if(a[i] > a[j]){
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }

  printf("\nSlova sortirana po abecedi: \n");
  for(i=0; i<10; i++){
    printf("%c ",a[i]);
  }

  return 0;
}
