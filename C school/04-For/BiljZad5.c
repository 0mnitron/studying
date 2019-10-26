#include <stdio.h>
int main(){
  int i,br,max;
  printf("\nUpisi prvi broj: ");
  scanf("%d",&br);
  max=br;
  for(i=2; i<=100; i++){
    printf("\nUpisi sljedeci broj: ");
    scanf("%d",&br);
    if(br>max){
      max=br;
    }
  }
  printf("\nNajveci upisani broj: %d",max);
  return 0;
}
