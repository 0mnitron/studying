#include <stdio.h>
int main(){
  int br[8], brNep[8], i;

  for(i=0; i<8; i++){
    printf("\nUpisi broj: ");
    scanf("%d", &br[i]);

    if(br[i]%2 != 0){
      brNep[i] = br[i];
    }else{
      brNep[i] = 0;
    }
  }

  printf("\nNeparni brojevi iz polja: ");
  for(i=0; i<8; i++){
    if(brNep[i] != 0){
      printf("\n%d ",brNep[i]);
    }
  }

  return 0;
}
