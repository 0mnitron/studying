#include <stdio.h>
int main(){
  float br;
  int i, min;

  printf("\nUpisi cijeli broj: ");
  scanf("%d",&min);

  for(i=1; i<5; i++){
    printf("\nUpisi broj: ");
    scanf("%f",&br);

    if(br==(int)br && br<min){
      min=br;
    }
  }

  printf("\nNajmanji upisani cijeli broj je broj %d ",min);
  return 0;
}
