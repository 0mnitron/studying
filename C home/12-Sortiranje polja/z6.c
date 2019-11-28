#include <stdio.h>
int main(){
  int a[10], b[5], i, j, t;

  for(i=0; i<10; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%d", &a[i]);
  }

  for(i=0; i<5; i++){
    b[i] = a[1+i*2];
  }

  for(i=0; i<5-1; i++){
    for(j=i+1; j<5; j++){
      if(b[i] > b[j]){
        t = b[i];
        b[i] = b[j];
        b[j] = t;
      }
    }
  }

  printf("\nNovo polje je: ");
  for(i=0; i<5; i++){
    printf("\n%d ", b[i]);
  }

  return 0;
}
