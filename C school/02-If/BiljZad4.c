#include <stdio.h>
int main(){
  int a,b,c,min;
  printf("Upisi 3 broja: ");
  scanf("%d %d %d",&a,&b,&c);
  min=a;
  if(a==b && a==c){
    printf("Sva 3 broja su ista.\n");
  }
  if(b<min){
    min=b;
  }
  if(c<min){
    min=c;
  }
  printf("Najmanji broj je: %d\n",min);
  return 0;
}
