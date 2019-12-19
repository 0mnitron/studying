#include <stdio.h>
int main(){
  float br[100], realni[100], t;
  int i, j, cijeli[100], r=0, c=0;
  
  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%f", &br[i]);
    if(br[i] == (int)br[i]){
      cijeli[c] = (int)br[i];
      c++;
    }else{
      realni[r] = br[i];
      r++;
    }
  }

  for(i=0; i<r-1; i++){
    for(j=i+1; j<r; j++){
      if(realni[i] > realni[j]){
        t = realni[i];
        realni[i] = realni[j];
        realni[j] = t;
      }
    }
  }

  for(i=0; i<c-1; i++){
    for(j=i+1; j<c; j++){
      if(cijeli[i] < cijeli[j]){
        t = cijeli[i];
        cijeli[i] = cijeli[j];
        cijeli[j] = t;
      }
    }
  }

  printf("\nRealne vrijednosti: \n");
  for(i=0; i<r; i++){
    printf("%f ",realni[i]);
  }

  printf("\nCijele vrijednosti: \n");
  for(i=0; i<c; i++){
    printf("%d ",cijeli[i]);
  }

  return 0;
}
