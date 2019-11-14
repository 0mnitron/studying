#include <stdio.h>
#include <string.h>
int main(){
  char r1[15], r2[15], r3[15];
  int i, n1, n2, n3, max;

  printf("\nUpisi prvu rijec: ");
  scanf("%s", r1);
  printf("\nUpisi drugu rijec: ");
  scanf("%s", r2);
  printf("\nUpisi trecu rijec: ");
  scanf("%s", r3);

  n1 = strlen(r1);
  n2 = strlen(r2);
  n3 = strlen(r3);

  max = n1;
  if(n2 > max){
    max = n2;
  }
  if(n3 > max){
    max = n3;
  }

  printf("\nBroj slova najdulje rijeci: %d",max);
  
  return 0;
}
