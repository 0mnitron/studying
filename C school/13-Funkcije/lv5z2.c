#include <stdio.h>
int najmanji(int x, int y, int z);
int main(){
  int a, b, c, min;

  printf("\nUpisi tri broja: ");
  scanf("%d %d %d", &a, &b, &c);
  min = najmanji(a, b, c);
  printf("\nNajmanji od upisanih brojeva je broj %d", min);
  return 0;
}

int najmanji(int x, int y, int z){
  int min;
  min = x;
  if(y < min){
    min = y;
  }
  if(z < min){
    min = z;
  }
  
  return min;
}
