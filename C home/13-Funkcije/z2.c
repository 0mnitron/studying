#include <stdio.h>
int najveci(int x, int y, int z);
int main(){
  int a, b, c, max;

  printf("Upisi tri broja: ");
  scanf("%d %d %d",&a, &b, &c);
  max = najveci(a,b,c);
  printf("\nNajveci upisani broj je broj %d",max);

  return 0;
}

int najveci(int x, int y, int z){
  int max;

  max = x;
  if(y > max){
    max = y;
  }
  if(z > max){
    max = z;
  }

  return max;
}
