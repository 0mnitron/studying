#include <stdio.h>
int minus(int br);
int main(){

  minus(10);

  return 0;
}

int minus(int br){
  br--;
  printf("\nbr=%d",br);
  if(br <= 0){
    return br;
  }
  return minus(br);
}
