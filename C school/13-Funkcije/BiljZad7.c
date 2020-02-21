#include <stdio.h>
void aritmeticka(float x);
int main(){
  float br[100];
  int i;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. realni broj: ", i+1);
    scanf("%f", &br[i]);
    aritmeticka(br[i]);

  }
  return 0;
}

void aritmeticka(float x){
  int tis, sto , des;
  float arsr;

  tis = (int)(x*1000)%10;
  sto = (int)(x*100)%10;
  des = (int)(x*10)%10;
  arsr = (float)(tis+sto+des)/3;
  printf("\nAritmeticka sredina znamenki desetnina, stotnina i tisucnina broja %f je %.2f", x, arsr);

  return;
}
