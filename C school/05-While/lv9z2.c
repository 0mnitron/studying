#include <stdio.h>
int main(){
  int naz=0,brojnik=0;
  float br,ars;

  printf("\nUpisi prvi prvi broj: ");
  scanf("%f",&br);

  while(br>0 && (int)br==br){
    naz++;
    brojnik=brojnik+(int)br;
    printf("\nUpisi prirodni broj: ");
    scanf("%f",&br);
  }
  
  ars=(float)brojnik/naz;
  printf("\nAritmeticka sredina upisanih brojeva je %.2f",ars);

  return 0;
}
