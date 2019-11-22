#include <stdio.h>
int main(){
  int a[100], i, j, t;
  for(i=0; i<100; i++){
    printf("\nUpisi broj: ");
    scanf("%d", &a[i]);
  }

  for(i=0; i<100-1; i++){
    for(j=i+1; j<100; j++){
      if(a[i] > a[j]){
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }

  printf("\nVrijednosti u polju sortirane od najmanje do najvece su:\n"):

  for(i=0; i<100; i++){
    printf("%d ",a[i]);
  }
  
  return 0;
}
