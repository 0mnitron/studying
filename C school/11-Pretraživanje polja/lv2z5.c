#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], zn;
  int i, n, ima, raz=0;

  printf("\nUpisi recenicu: ");
  gets(rec);
  n = strlen(rec);
  printf("\nUpisi znak: ");
  scanf(" %c", &zn);

  for(i=0; i<n; i++){
    if(rec[i] == zn){
      ima = raz+1;
      break;
    }
    if(rec[i] == ' '){
      raz++;
    }
  }

  printf("\nNakndano upisani znak %c se pojavljuje u %d. rijeci u recenici.", zn, ima);

  return 0;
}
