#include <stdio.h>
void prikaz(int *pok, int n);
int main(){
  int br[30], *pokocj, i;

  pokocj = &br[0];
  for(i=0; i<30; i++){
    do{
      printf("\nUpisi broj: ");
      scanf("%d", pokocj+i);
    }while(*(pokocj+i) < 1 || *(pokocj+i) > 5);
  }

  prikaz(pokocj, 30);

  return 0;
}

void prikaz(int *pok, int n){
  int i, j;

  for(i=0; i<n; i++){
    printf("\n%d\t", *(pok+i));
    for(j=1; j<=*(pok+i); j++){
      printf("*");
    }
  }
  
  return;
}
