#include <stdio.h>
int main(){
  int br;
  printf("Upisi broj: ");
  scanf("%d",&br);
  if(br>0){
    printf("\nBroj je pozitivan.");
  }else if(br<0){
    printf("\nBroj je negativan.");
  }else{
    printf("\nBroj je nula.");
  }
  return 0;
}
