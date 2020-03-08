#include <stdio.h>
#include <string.h>
int main(){
  char rijec[15], zn;
  int i, n, ima;

  printf("\nUpisi rijec: ");
  scanf("%s", &rijec);
  printf("\nUpisi znak: ");
  scanf(" %c", &zn);
  n = strlen(rijec);

  for(i=0; i<n; i++){
    if(rijec[i] == zn){
      ima = i+1;
      break;
    }
  }

  printf("\nNakndano upisani znak se nalazi na %d. mjesu u rijeci.", ima);

  return 0;
}
