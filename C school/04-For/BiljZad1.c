#include <stdio.h>
int main(){
  int br,parnih=0,i;
  for(i=1; i<=100; i++){
    printf("\nUpisi broj: ");
    scanf("%d",&br);
    if(br%2==0){
      parnih = parnih + 1;
    }
  }
  printf("\nUpisano je %d parnih brojeva",parnih);
  return 0;
}
