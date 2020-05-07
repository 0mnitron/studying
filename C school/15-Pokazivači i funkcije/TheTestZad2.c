#include <stdio.h>
void sort(int *pok, int n);
int main(){
  int br[100];
  int *pok;
  int i;

  pok = &br[0];
  for(i=0; i<5; i++){
    printf("\nUpisi prirodan broj: ");
    scanf("%d", pok+i);
  }

  sort(pok, 5);

  return 0;
}

void sort(int *pok, int n){
  int i,j,t,x;

  for(i=0; i<n-1; i++){
    for(j=i+i; j<n; j++){
      if(*(pok+i)%2 != 0){
        t = *(pok+i);
        *(pok+i) = *(pok+j);
        *(pok+j) = t;
      }
    }
  }

  for(i=0; i<n; i++){
    if(*(pok+i)%2 != 0){
      x=i;
      break;
    }
  }

  for(i=0; i<x-1; i++){
    for(j=i+i; j<x; j++){
      if(*(pok+i) < *(pok+j)){
        t = *(pok+i);
        *(pok+i) = *(pok+j);
        *(pok+j) = t;
      }
    }
  }
  for(i=x; i<n-1; i++){
    for(j=i+i; j<n; j++){
      if(*(pok+i) > *(pok+j)){
        t = *(pok+i);
        *(pok+i) = *(pok+j);
        *(pok+j) = t;
      }
    }
  }
  printf("\nSortirane vrijednosti: ");
  for(i=0; i<n; i++){
    printf("\n%d", *(pok+i));
  }

  return;
}
