#include <stdio.h>
#include <string.h>
int main(){
  char r[15];
  int i, n;

  printf("\nUpisi rijec: ");
  scanf("%s", r);
  n = strlen(r);

  if(r[0] == 's' || r[0] == 'S'){
    for(i=0; i<n; i++){
      printf("%c ",r[i]);
    }
  }else{
    for(i=0; i<n; i++){
      printf("\n%c",r[i]);
    }
  }

  return 0;
}
