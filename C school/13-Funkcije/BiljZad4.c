#include <stdio.h>
int paran(int br);
int main(){
  int br[10], i, par;
  for(i=0; i<10; i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%d", &br[i]);
  }

  for(i=0; i<10; i++){
    par = paran(br[i]);
    if(par == 1){
      printf("\nUpisani broj %d je paran.", br[i]);
    }else{
      printf("\nUpisani broj %d nije paran.", br[i]);
    }
  }
  return 0;
}

int paran(int br){
  int par;
  if(br%2 == 0){
    par = 1;
  }else{
    par = 0;
  }
  return par;
}
