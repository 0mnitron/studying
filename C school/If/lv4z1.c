#include <stdio.h>
int main(){
  int x;
  printf("Upisati cijeli broj: ");
  scanf("%d",&x);
  if(x % 9 == 0){
    printf("Broj je djeljiv s 9\n");
  }else{
    printf("Broj nije djeljiv s 9\n");
  }
  return 0;
}
