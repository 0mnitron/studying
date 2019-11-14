#include <stdio.h>
int main(){
  char zn[8];
  int i, brBr=0, brZn=0;

  for(i=0; i<8; i++){
    printf("\nUpisi znak: ");
    scanf(" %c", &zn[i]);

    if(zn[i] >= '0' && zn[i] <= '9'){
      brBr++;
    }
    if(zn[i] >= 'a' && zn[i] <='z'){
      brZn++;
    }
  }

  if(brBr > brZn){
    printf("\nUpisano je vise brojeva.");
  }else if(brBr < brZn){
    printf("\nUpisano je vise malih slova.");
  }else{
    printf("\nUpisano je jednako malih slova i brojeva.");
  }
  return 0;
}
