#include <stdio.h>
void parnost(int x);
int main(){
  int br, i;

  for(i=0; i<100; i++){
    printf("\nUpisi prirodan broj: ");
    scanf("%d", &br);
    parnost(br);
  }

  return 0;
}

void parnost(int x){
  if(x%2 == 0){
    printf("\nUpisani broj %d je paran.", x);
  }else{
    printf("\nUpisani broj %d nije paran.", x);
  }

  return;
}
