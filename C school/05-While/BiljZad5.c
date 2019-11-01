#include <stdio.h>
int main(){
  int i,prost=0;
  float br;
  
  printf("\nUpisi prirodni broj: ");
  scanf("%f",&br);
  
  while(br==(int)br && br>0){
    for(i=2; i<=br/2; i++){
      if((int)br%i==0){
        prost=1;
        break;
      }
    }
     
    if(prost==0){
      printf("\nBroj %.0f je prosti broj.",br);
    }else{
      printf("\nBroj %.0f nije prosti broj.",br);
    }

    prost=0;

    printf("\nUpisi sljedeci prirodni broj: ");
    scanf("%f",&br);
  }
  return 0;
}
