#include <stdio.h>
int main(){
  float br;
  int i, prost=0, j;

  for(i=0; i<100; i++){
    do{
      printf("\nUpisi prirodni broj: ");
      scanf("%f", &br);
    }while(br != (int)br || br <= 0);

    for(j=2; j<=br/2; j++){
      if((int)br%j == 0){
        prost = 1;
        break;
      }
    }

    if(prost == 0){
      printf("\nUpisani broj %.0f je prost broj", br);
    }else{
      printf("\nUpisani broj %.0f nije prost broj", br);
    }
    prost = 0;
  }
  
  return 0;
}
