#include <stdio.h>
int main(){
  int br=11, zbroj=0;

  while(br%11 == 0 && br <= 40){
    zbroj = zbroj + br;
    br = br + 11;
  }
  printf("\nZbroj je %d ",zbroj);
  return 0;
}
