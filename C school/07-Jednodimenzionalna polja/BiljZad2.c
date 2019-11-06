#include <stdio.h>
int main(){
  char zn[100];
  int i;

  for(i=0; i<100; i++){
    printf("Upisi znak: ");
    scanf(" %c",&zn[i]);
  }

  printf("\nUpisana su mala slova: ");
  for(i=0; i<100; i++){
    if(zn[i] >= 'a' && zn[i] <= 'z'){
      printf("\n%c ",zn[i]);
    }
  }

  return 0;
}
