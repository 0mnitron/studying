#include <stdio.h>
int main(){ 
  int max,tis,stot,des;
  float br;
  printf("\nUpisi prvi broj: ");
  scanf("%f",&br);
  while(br!=(int)br){
    tis=(int)(br*1000)%10;
    stot=(int)(br*100)%10;
    des=(int)(br*10)%10;

    max=tis;
    if(stot>max){
      max=stot;
    }
    if(des>max){
      max=des;
    }
    printf("\nNajveca znamenka tisucnina, stotnina i desetnina broja %f je %d",br,max);
    
    printf("\nUpisi sljedeci broj: ");
    scanf("%f",&br);
  }
  return 0;
}
