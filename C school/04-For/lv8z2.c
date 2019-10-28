#include <stdio.h>
int main(){
  int br,i,sto,des,jed,zbroj=0;
  for(i=1; i<=5; i++){
    printf("\nUpisi broj: ");
    scanf("%d",&br);
    sto=br/100;
    des=br%100/10;
    jed=br%10;
    zbroj=zbroj+(sto+des+jed);
  }
  printf("\nZbroj znamenki upisanih troznamenkastih brojeva je: %d",zbroj);
  return 0;
}
