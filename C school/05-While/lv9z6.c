#include <stdio.h>
int main(){
  int br, max;

  printf("Upisi prvi parni broj: ");
  scanf("%d",&br);
  max = br;

  while(br % 2 == 0){
    if(br > max){
      max = br;
    }
    
    printf("\nUpisi sljedeci parni broj: ");
    scanf("%d",&br);

  }

  printf("\nNajveci upisani parni broj je broj %d ",max);

  return 0;
}
