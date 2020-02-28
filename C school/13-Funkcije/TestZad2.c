#include <stdio.h>
void kolicina(int x);
int main(){
  int i, br;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. cijeli broj: ", i+1);
    scanf("%d", &br);
    kolicina(br);
  }
  return 0;
}

void kolicina(int x){
  int brojilo=0;

  while(x != 0){
    x = (int)x / 10;
    brojilo++;
  }
  printf("\nUpisani broj ima %d znamenki.", brojilo);

  return;
}
