#include <stdio.h>
int main(){
  int i,prirodni=0;
  float br;
  for(i=1; i<=5; i++){
    printf("\nUpisi broj:");
    scanf("%f",&br);
    if((int)br==br && br>0){
      prirodni=prirodni+1;
    }
  }
  printf("\nBroj prirodnih brojeva je %d",prirodni);
  return 0;
}
