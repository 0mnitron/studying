#include <stdio.h>
#include <math.h>
int main(){
  float a,o,p,d;
  int sell;
  printf("\nUpisi stranicu kvadrata:");
  scanf("%f",&a);
  printf("\nUpisi: ");
  printf("\n1-za izracunavanje opsega kvadrata");
  printf("\n2-za izracunavanje povrsine kvadrata");
  printf("\n3-za izracunavanje dijagonale kvadrata");
  scanf("%d",&sell);
  
  switch (sell){
    case 1 :  o=4*a;
              printf("\nOpseg kvadrata je: %.2f",o);
              break;
                
    case 2 :  p=a*a;
              printf("\nPovrsina kvadrata je: %.2f",p);  
              break;
                
    case 3 :  d=a*sqrt((float)2);
              printf("\nDijagonala kvadrata je: %.2f",d);
              break;
                
    default  :  printf("\nNisi upisao broj 1,2 ili 3");
 }
  return 0;
}
