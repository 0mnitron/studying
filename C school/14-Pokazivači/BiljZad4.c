#include <stdio.h>
int main(){
  float br[100];
  float *pok;
  int i, cijeli=0, realni=0;

  pok = &br[0];
  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj: ",i+1);
    scanf("%f", pok+i);
  }

  for(i=0; i<100; i++){
    if(*(pok+i) == (int)*(pok+i)){
      cijeli++;
    }
    else{
      realni++;
    }
  }

  if(cijeli > realni){
    printf("\nUpisano je vise cijelih brojeva.");
  }
  else if(realni > cijeli){
    printf("\nUpisano je vise realnih brojeva.");
  }
  else{
    printf("\nUpisan je jednak broj realnih i cijelih brojeva.");
  }
  
  return 0;
}
