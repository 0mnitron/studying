#include <stdio.h>
void neparni(int x);
int main(){
  int i, br;

  for(i=0; i<100; i++){
    printf("\nUpisi cijeli troznamenkasti broj: ");
    scanf("%d", &br);
    neparni(br);
  }
  return 0;
}

void neparni(int x){
  int sto, des, jed;
  
  sto = x/100;
  des = x%100/10;
  jed = x%10;

  printf("\nUpisani broj bez parnih znamenki: \n");
  
  if(sto%2 != 0){
    printf("%d", sto);
  }
  if(des%2 != 0){
    printf("%d", des);
  }
  if(jed%2 != 0){
    printf("%d", jed);
  }
  
  return;
}
