#include <stdio.h>
int main(){
  int parni=0;
  float br;
  printf("\nUpisi prvi broj: ");
  scanf("%f",&br);
  while((int)br==br && br>0){
    if((int)br%2==0){
      parni++;
    }
    printf("\nUpisi sljedeci broj: ");
    scanf("%f",&br);
  }
  if(parni>0){
    printf("\nUpisano je %d parnih brojeva",parni);
  }else{
    printf("\nNije upisan niti jedan paran broj");
  }
  return 0;
}
