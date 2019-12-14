#include <stdio.h>
int prosti (int x);
int main(){
  int br;
  printf("\nUpisi broj: ");
  scanf("%d", &br);
  prosti (br);
  return 0;
}

int prosti (int x){
  int i, rez=0;

  for(i=2; i<=x/2; i++){
    if(x%i == 0){
      rez = 1;
    }
  }

  if(rez == 0){
    printf("\nUpisani broj je prosti broj.");
  }else{
    printf("\nUpisani broj nije prosti broj.");
  }

  return 0;
}
