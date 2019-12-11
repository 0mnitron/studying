#include <stdio.h>
int zbroj(int x, int y);
int main(){
  int a, b, z;

  printf("\nUpisi dva broj: ");
  scanf("%d %d", &a, &b);

  z = zbroj(a,b);

  return 0;
}

int zbroj(int x, int y){
  int z, i;
  
  for(i=x; i<=y; i++){
    z = z + i;
  }

  printf("\nZbroj brojeva izmedu ova dva brojeva je %d", z);
  return 0;
}
