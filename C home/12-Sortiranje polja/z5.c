#include <stdio.h>
int main(){
  int i, j, t, a[5], br;

  for(i=0; i<5; i++){
    printf("\nUpisi %d. broj u polje: ", i+1);
    scanf("%d", &a[i]);
  }

  printf("\nUpisi broj: ");
  scanf("%d", &br);

  for(i=0; i<5; i++){
    a[i] = a[i] + br;
  }

  for(i=0; i<5-1; i++){
    for(j=i+1; j<5; j++){
      if(a[i] < a[j]){
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }

  printf("\nNovo polje: ");
  for(i=0; i<5; i++){
    printf("\n%d", a[i]);
  }

  return 0;
}
