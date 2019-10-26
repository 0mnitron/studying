#include <stdio.h>
int main(){
  int i,brPoz=0,brNeg=0,br;
  for(i=0; i<100; i++){
    printf("\nUpisi broj: ");
    scanf("%d",&br);
    if(br>0){
      brPoz=brPoz+1;
    }else if(br<0){
      brNeg=brNeg+1;
    }
  }
  if(brPoz>brNeg){
    printf("\nUpisano je vise pozitivnih brojeva.");
  }else{
    printf("\nUpisano je vise negativnih brojeva.");
  }
  return 0;
}
