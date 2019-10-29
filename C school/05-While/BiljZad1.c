#include <stdio.h>
int main(){
  int br,pozitivni=0,negativni=0;
  printf("\nUpisi broj: ");
  scanf("%d",&br);
  while(br!=0){
    if(br>0){
      pozitivni++;
    }
    if(br<0){
      negativni++;
    }
    printf("\nUpisi sljedeci broj: ");
    scanf("%d",&br);
  }
  if(pozitivni>negativni){
    printf("\nUpisano je vise pozitivnih brojeva.");
  }else{
    printf("\nUpisano je vise negativnih brojeva.");
  }
  return 0;
}
