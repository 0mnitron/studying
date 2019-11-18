#include <stdio.h>
int main(){
  int i, j, umn;

  printf("  |");
  for(i=1; i<=10; i++){
    printf("  %d", i);
  }

  printf("\n");
  
  for(i=1; i<=20; i++){
    printf("--");
  }
  
  printf("\n");

  for(i=1; i<=10; i++){
    printf("%d|",i);

    for(j=1; j<=10; j++){
      umn = i*j;
      printf("%d  ",umn);
    }
    
    printf("\n");
  }
  
  return 0; 
}
