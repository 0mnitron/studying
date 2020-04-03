#include <stdio.h>
void sortiranje(float *pok, int n);
int main(){
  float br[6];
  float *pok;
  int i;

  pok = &br[0];
  for(i=0; i<6; i++){
    printf("\nUpisi %d. broj: ",i+1),
    scanf("%f", pok+i);
  }

  sortiranje(pok, 6);
  return 0;
}

void sortiranje(float *pok, int n){
  int i, j, kraj;
  float t;

  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(*(pok+i) != (int)*(pok+i)){
        t = *(pok+i);
        *(pok+i) = *(pok+j);
        *(pok+j) = t;
      }
    }
  }

  for(i=0; i<n; i++){
    if(*(pok+i)!= (int)*(pok+i)){
      kraj=i;
      break;
    }
  }

  for(i=0; i<kraj-1; i++){
    for(j=i+1; j<kraj; j++){
      if(*(pok+i) > *(pok+j)){
        t = *(pok+i);
        *(pok+i) = *(pok+j);
        *(pok+j) = t;
      }
    }
  }
  for(i=kraj; i<n-1; i++){
    for(j=i+1; j<n; j++){
      if(*(pok+i) < *(pok+j)){
        t = *(pok+i);
        *(pok+i) = *(pok+j);
        *(pok+j) = t;
      }
    }
  }

  for(i=0; i<n; i++){
    if(*(pok+i) == (int)*(pok+i)){
      printf("%.0f ",*(pok+i));
    }else{
      printf("%f ",*(pok+i));
    }
  }
  return;
}
