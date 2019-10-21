#include <stdio.h>
int main(){
  float br;
  printf("Upisi decimalni broj: ");
  scanf("%f",&br);
  if((int)br%2!=0){
    printf("Cijeli dio broja je neparan.\n");
  }else{
    printf("Cijeli dio broja je paran.\n");
  }
  return 0;
}
