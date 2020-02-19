#include <stdio.h>
void binarni(int x);
int main(){
  int br;

  printf("\nUpisi broj: ");
  scanf("%d", &br);
  binarni(br);

  return 0;
}

void binarni(int x){
  char bin[20];
  int i=0, j;

  while(x != 0){
    bin[i] = x%2;
    x = x/2;
    i++;
  }

  j = i-1;

  for(i=j; i>=0; i--){
    printf("%d", bin[i]);
  }

  return;
}
