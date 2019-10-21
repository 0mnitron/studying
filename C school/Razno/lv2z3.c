#include <stdio.h>
int main(){
  int x,sat,min,sek;
  printf("Ucitaj sekunde: ");
  scanf("%d",&x);
  
  sat = x / 3600;
  min = (x - sat * 3600) / 60;
  sek = x - sat * 3600 - min * 60;
  
  printf("To je %d sati, %d minuta i %d sekunda\n",sat,min,sek);
  
  return 0;
}
