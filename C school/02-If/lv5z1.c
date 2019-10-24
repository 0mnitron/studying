#include <stdio.h>
int main(){
  int br;
  printf("Upisi neki cijeli broj: ");
  scanf("%d",&br);
  if(br%3==0 && br%2==0){
    printf("Broj je paran i djeljiv sa 3.");
  }else{
    printf("Broj nije paran ili nije djeljiv sa 3.");
  }
  return 0;
}
