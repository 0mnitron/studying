#include <stdio.h>
int main(){
  int i,min,max,n,br;
  printf("\nUpisi koliko zelis brojeva upisati: ");
  scanf("%d",&n);
  printf("\nUpisi prvi broj: ");
  scanf("%d",&br);
  min=br;
  max=br;
  for(i=2; i<=n; i++){
    printf("\nUpisi sljedeci broj: ");
    scanf("%d",&br);
    if(br<min){
      min=br;
    }
    if(br>max){
      max=br;
    }
  }
  printf("\nNajmanji broj je: %d, a najveci broj je %d",min,max);
  return 0;
}
