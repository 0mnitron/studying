#include <stdio.h>
int main(){
  int x, sto, des, jed;
  printf("Upisi troznamenkasti cijeli broj: \n");
  scanf("%d",&x);
  sto = x/100;
  des = (x - sto * 100)/10;
  jed = x - sto * 100 - des *10;
  printf("\nRezultat:\n%d stotica\n%d desetica\n%d jedinica",sto,des,jed);
  return 0;
}
