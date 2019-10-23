#include <stdio.h>
int main(){
  float br;
  printf("Upisi broj: ");
  scanf("%f",&br);
  if(br==(int)br){
    printf("\nBroj je cijeli");
  }else{
    printf("\nBroj nije cijeli");
  }
  return 0;
}
