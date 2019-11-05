#include <stdio.h>
int main(){
  int br,des;

  printf("\nUpisi prvi broj: ");
  scanf("%d",&br);

  while(br>=100 && br<1000){
    des = br %100 /10;
  
    if(des%2==0){
      printf("\nZnamenka desetica je parna.");
    }else{
      printf("\nZnamenka desetica je neparna.");
    }

    printf("\nUpisi sljedeci broj: ");
    scanf("%d",&br);
  }

  return 0;
}
