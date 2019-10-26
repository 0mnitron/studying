#include <stdio.h>
int main(){
  int i;
  printf("\nNeparni brojevi od 100 do 1: ");
  for(i=99; i>=1; i=i-2){
    printf("%d ",i);
  }
  return 0;
}
