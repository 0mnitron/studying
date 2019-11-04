#include <stdio.h>
int main(){
  int cijeli,zbroj=0;
  float br;
  printf("\nUpisi prvi broj: ");
  scanf("%f",&br);

  while((int)br!=br){
    cijeli=(int)br;
    zbroj+=cijeli;

    printf("\nUpisi sljedeci broj: ");
    scanf("%f",&br);
  }

  printf("\nZbroj cijelih dijelova upisanih decimalnih brojeva je %d", zbroj);
  return 0;
}
