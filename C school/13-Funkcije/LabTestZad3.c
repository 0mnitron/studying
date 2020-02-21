#include <stdio.h>
void zamjena(float x);
int main(){
  float br;
  int i;

  for(i=0; i<4; i++){
    printf("\nUpisi %d. realni broj: ", i+1);
    scanf("%f", &br);
    zamjena(br);
  }

  return 0;
}

void zamjena(float x){
  int des, jed, stot, dest;
  float zam;

  des = (int)x/10;
  jed = (int)x%10;

  stot = (int)(x*100)%10;
  dest = (int)(x*10)%10;

  zam = jed*10 + dest + (stot/10.) + (des/100.);
  printf("Broj sa rotiranim znamenkama: %.2f", zam);
  
  return;
}
