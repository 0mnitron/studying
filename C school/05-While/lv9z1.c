#include <stdio.h>
#include <math.h>
int main(){
  int br;
  float kor;
  
  printf("\nUpisi cijeli pozitivan broj: ");
  scanf("%d",&br);

  while(br>0){

    kor = sqrt((float)br);
    printf("\nDrugi korijen broja %d je %.2f",br,kor);

    printf("\nUpisi cijeli pozitivan broj: ");
    scanf("%d",&br);
  }

  return 0;
}
