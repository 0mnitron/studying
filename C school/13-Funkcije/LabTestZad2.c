#include <stdio.h>
void najveca(float x);
int main(){
  float br;
  int i;

  for(i=0; i<5; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%f", &br);
    najveca(br);
  }

  return 0;
}

void najveca(float x){
  int tis, sto, des, max;

  if(x != (int)x){
    tis = (int)(x*1000)%10;
    sto = (int)(x*100)%10;
    des = (int)(x*10)%10;

    max = tis;
    if(sto > max){
      max = sto;
    }
    if(des > max){
      max = des;
    }
    printf("\nNajveca znamenka tisucnina, stotnina, desetnina upisanog broja je %d", max);
  }
  
  return;
}
