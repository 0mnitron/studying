#include <stdio.h>
int main(){
  float br;
  printf("\nUpisi broj: ");
  scanf("%f",&br);
  if(br>0 && br==(int)br){
    printf("\nBroj je prirodan.");
  }else if(br!=(int)br){
    printf("\nBroj je realan.");
  }else{
    printf("\nBroj je negativan cjeli.");
  }
  return 0;
}
