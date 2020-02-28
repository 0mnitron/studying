#include <stdio.h>
#include <math.h>
float korijen(int x);
int main(){
  float kor;
  int br;

  printf("\nUpisi broj: ");
  scanf("%d", &br);

  while(br > 0){
    kor = korijen(br);
    printf("\nKorijen upisanig broja %d je %.2f", br, kor);

    printf("\nUpisi broj: ");
    scanf("%d", &br); 
  }
  return 0;
}

float korijen(int x){
  float kor;
  kor = sqrt((float)x);
  return kor;
}
