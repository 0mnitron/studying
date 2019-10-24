#include <stdio.h>
int main(){
  int br,jed,des;
  printf("Upisi troznamenkasti broj: ");
  scanf("%d",&br);
  des = br % 100 / 10;
  jed = br % 10;
  if(des>jed){
    printf("Znamenka desetica je veca od znamenke jedinica\n");
  }else{
    printf("Znamenka desetica nije veca od znamenke jedinica\n");
  }
  return 0;
}
