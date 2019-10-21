#include <stdio.h>
#include <math.h>
int main(){
  float x,y;
  printf("Upisi realan broj: ");
  scanf("%f",&x);
  if(x<0){
    y = x*x;
    printf("y=%.2f\n",y);
  }else if(x>0){
    y = sqrt(x);
    printf("y=%.2f\n",y);
  }else{
    printf("y=0\n");
  }
  return 0;
}
