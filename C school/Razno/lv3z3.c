#include <stdio.h>
int main(){
  int x, sto, des, jed;
  float sred;
  
  printf("Upisi troznamenkasti broj: ");
  scanf("%d",&x);
  sto = x/100;
  des = x %100 /10;
  jed = x % 10;
  sred = (float)(sto + des + jed) / 3;
  
  printf("\nZnamenka stotice je: %d \nZnamenka desetice je: %d \nZnamenka jedinice je: %d \nAritmeticka sredina je: %.2f\n",sto,des,jed,sred);
  
  return 0;
}
