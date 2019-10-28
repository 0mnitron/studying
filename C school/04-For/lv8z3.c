#include <stdio.h>
int main(){
  int br,i,brParnih=0,zbrojParnih=0;
  for(i=1; i<=10; i++){
    printf("\nUpisi broj: ");
    scanf("%d",&br);
    if(br%2==0){
      brParnih=brParnih+1;
      zbrojParnih=zbrojParnih+br;
    }
  }
  printf("\nUpisano je %d parnih brojeva i njihov zbroj je %d",brParnih,zbrojParnih);
  return 0;
}
