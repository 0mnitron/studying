#include <stdio.h>
int zbroj(int x, int y);
int main(){
  int a, b, zbr;

  printf("\nUpisi dva broja: ");
  scanf("%d %d", &a, &b);
  zbr = zbroj(a, b);
  printf("\nZbroj brojeva izmedu dva upisana broja je: %d", zbr);

  return 0;
}

int zbroj(int x, int y){
  int i, zbr=0;

  for(i=x; i<=y; i++){
    zbr = zbr + i;
  }
  
  return zbr;
}
