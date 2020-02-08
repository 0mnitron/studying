#include <stdio.h>
void prost(int x);
int main(){
  int br;

  printf("\nUpisi prirodan broj: ");
  scanf("%d", &br);
  prost(br);

  return 0;
}

void prost(int x){
  int i, prosti=0;

  for(i=2; i<=x/2; i++){
    if(x%i==0){
      prosti = 1;
      break;
    }
  }

  if(prosti == 0){
    printf("\nBroj %d je prost", x);
  }else{
    printf("\nBroj %d nije prost", x);
  }

  return;
}
