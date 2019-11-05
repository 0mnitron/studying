#include <stdio.h>
int main(){
  int br,poz=0,neg=0;

  printf("\nUpisi prvi broj: ");
  scanf("%d",&br);

  while(br!=7){
    if(br<0){
      neg++;
    }
    else if(br>0){
      poz++;
    }
    printf("\nUpisi sljedeci broj: ");
    scanf("%d",&br);
  }

  if(poz>0 && neg>0){
    if(poz < neg){
      printf("\nUpisano je vise negativnih brojeva.");
    }
    else if(poz > neg){
      printf("\nUpisano je vise pozitivnih brojeva.");
    }else{
      printf("\nUcitano je jednako pozitivnih i negativnih brojeva.");
    }
  }

  return 0;
}
