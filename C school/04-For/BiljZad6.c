#include <stdio.h>
int main(){
  int i,br,br2,min,tes;
  printf("Upisi prvi broj: ");
  scanf("%d",&br);
  min=br;
  for(i=2; i<=100; i++){
    printf("\nUpisi sljedeci broj: ");
    scanf("%d",&br2);
    if(br2<min){
      min=br2;
    }
    else if(br2==br){
      tes=1;
    }else{
      tes=0;
    }
  }
  if(tes!=1){
    printf("\nNajmanji broj je: %d",min);
  }else{
    printf("\nSvi upisani brojevi su isti.");
  }
  return 0;
}
