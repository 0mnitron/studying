#include <stdio.h>
int main(){
  int x[10], x2[10], i;

  for(i=0; i<10; i++){
    printf("\nUpisi broj u polje: ");
    scanf("%d", &x[i]);

    if(x[i]%2 == 0){
      x2[i] = x[i];
    }else{
      x2[i] = 0;
    }
  }

  printf("\nUpisani parni brojevi: ");
  for(i=0; i<10; i++){
    if(x2[i] != 0){
      printf("\n%d",x2[i]);
    }
  }
  
  return 0;
}
