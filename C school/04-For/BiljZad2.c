#include <stdio.h>
int main(){
  int i;
  printf("\nParni brojevi do 100: ");
  for(i=1; i<=100; i++){
    if(i%2==0){
      printf("%d ",i);
    }
  }
  return 0;
}
