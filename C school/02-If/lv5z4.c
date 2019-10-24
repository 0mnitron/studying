#include <stdio.h>
int main(){
  int a,b,c,max,min,sred;
  printf("Upisi tri broja:\n");
  scanf("%d %d %d",&a,&b,&c);
  max=a;
  if(b>max){
    max=b;
  }
  if(c>max){
    max=c;
  }
  
  min=a;
  if(b<min){
    min=b;
  }
  if(c<min){
    min=c;
  }
  
  sred=(a+b+c)-(min+max);
  printf("%d > %d > %d\n",max,sred,min);
  return 0;
}
