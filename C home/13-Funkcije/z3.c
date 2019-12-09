#include <stdio.h>
#include <math.h>
float korijen(float x);
int main(){
  float br, kor;

  printf("\nUpisi pozitivan broj: ");
  scanf("%f", &br);
  while(br > 0){
    kor = korijen(br);
    printf("\nKorijen broja %.0f je %.2f",br,kor);
    printf("\nUpisi sljedeci broj: ");
    scanf("%f", &br);
  }

  return 0;
}

float korijen(float x){
  float kor;

  kor = sqrt(x);

  return kor;
}
