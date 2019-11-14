#include <stdio.h>
int main(){
  char zn[8];
  int i, velika=0;

  for(i=0; i<8; i++){
    printf("\nUpisi znak u polje: ");
    scanf(" %c", &zn[i]);
    
    if(zn[i] >= 'A' && zn[i] <= 'Z'){
      velika++;
    }
  }

  printf("\nMedu upisanim znakovima njih %d su velika slova.", velika);
  return 0;
}
