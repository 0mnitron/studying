#include <stdio.h>
int main(){
  int n,max,br, i=1;

  printf("\nUpisi koliko zelis upisati brojeva: ");
  scanf("%d",&n);

  printf("\nUpisi %d. broj: ",i);
  scanf("%d",&br);
  max = br;
  i++;

  while(i <= n){
    printf("\nUpisi %d. broj: ",i);
    scanf("%d",&br);
    if(br > max){
      max = br;
    }
    i++;
  }

  printf("\nNajveci upisani broj je broj %d ",max);
  return 0;
}
