#include <stdio.h>
int main(){
  int br,brojnik=0,naz=0;
  float ars;

  printf("\nUpisi prvi broj: ");
  scanf("%d",&br);

  while(br!=0){
    naz++;
    brojnik = brojnik + br;
    printf("\nUpisi sljedeci broj: ");
    scanf("%d",&br);
  }
  ars=(float)brojnik/naz;
  printf("\nAritmeticka sredina upisanih brojeva je %.2f ",ars);
  return 0;
}
