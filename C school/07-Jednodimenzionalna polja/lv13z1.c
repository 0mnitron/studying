#include <stdio.h>
int main(){
  int x1[5], x2[5], x3[5], i;

  for(i=0; i<5; i++){
    printf("\nUpisi %d. broj u prvo polje: ",i+1);
    scanf("%d",&x1[i]);
  }
  for(i=0; i<5; i++){
    printf("\nUpisi %d. broj u drugo polje: ",i+1);
    scanf("%d",&x2[i]);
  }

  for(i=0; i<5; i++){
    if(x1[i] > x2[i]){
      x3[i] = x1[i];
    }else if(x1[i] < x2[i]){
      x3[i] = x2[i];
    }else{
      x3[i] = 5;
    }
    printf("\nx3[%d] = %d",i,x3[i]);
  }

  return 0;
}
