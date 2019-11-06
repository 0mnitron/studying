#include <stdio.h>
int main(){
  float br;

  do{
    printf("\nUpisi prirodni broj: ");
    scanf("%f",&br);
  }while((int)br != br  ||  br<0);

  if((int)br%2 == 0 ){
    printf("\nBroj je paran.");
  }else{
    printf("\nBroj nije paran.");
  }
  
  return 0;
}
