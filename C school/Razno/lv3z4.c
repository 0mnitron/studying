#include <stdio.h>
#include <math.h>
int main(){
  int a,b,c,d;
  float rez;
  
  printf("Upisi cetiri broja: ");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  
  rez = (float)abs(a-b) / (c*d) + (a*b) / abs(c-d);
  
  printf("\nRezultat izraza je: %.2f",rez);
  return 0;
}
