#include <stdio.h>
int main(){
  int i,br,min,jednaki=1;
  printf("\nUpisi prvi broj: ");
  scanf("%d",&br);
  min=br;
  for(i=2; i<=100; i++){
    printf("\nUpisi sljedeci broj: ");
    scanf("%d",&br);
    if(br<min){
      min=br;
    }
    if(br==min){
      jednaki=jednaki+1;
    }
  }
  if(jednaki==100){
    printf("\nUpisani su isti brojevi.");
  }
  if(jednaki<100){
    printf("\nNajmanji upisani broj je: %d",min);
  }
  return 0;
}
