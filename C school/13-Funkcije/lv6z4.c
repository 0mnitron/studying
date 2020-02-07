#include <stdio.h>
void parni(int x);
int main(){
  int br;

  printf("\nUpisi broj: ");
  scanf("%d", &br);

  while(br > 999 && br < 10000){
    parni(br);

    printf("\nUpisi broj: ");
    scanf("%d", &br);
  }

  return 0;
}

void parni (int x){
  int des;
  
  des = x%100/10;
  if(des%2 == 0){
    printf("\nZnamenka desetica broja %d je parna.", x);
  }else{
    printf("\nZnamenka desetica broja %d je neparna.", x);
  }

  return;
}
