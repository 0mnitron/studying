#include <stdio.h>
void zbroj(int x);
int main(){
  int br;

  printf("\nUpisi broj: ");
  scanf("%d", &br);
  zbroj(br);

  return 0;
}

void zbroj(int x){
  int zbr, jed=0, des=0, sto=0, tis=0;
  if(x>0 && x<10){
    jed = x;
  }
  else if(x>0 && x<100){
    des = x/10;
    jed = x%10;
  }
  else if(x>0 && x<1000){
    sto = x/100;
    des = x%100/10;
    jed = x%10;
  }
  else if(x>0 && x<10000){
    tis = x/1000;
    sto = x%1000/100;
    des = x%100/10;
    jed = x%10;
  }

  zbr = jed + des + sto + tis;
  printf("\nZbroj znamenki upisanog broja je %d", zbr);
 
  return;
}
