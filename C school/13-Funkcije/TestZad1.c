#include <stdio.h>
void prosti(float x);
int main(){
  float br;
  int i;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%f", &br);
    prosti(br);
  }
  return 0;
}

void prosti(float x){
  int i, prost=0;
  
  if(x != (int)x){
    for(i=2; i<=(int)x/2; i++){
      if((int)x%i == 0){
        prost = 1;
        break;
      }
    }
    if(prost == 0){
      printf("\nCijeli dio broja %f je prosti broj.", x);
    }else{
      printf("\nCijeli dio broja %f nije prosti broj.", x);
    }
  }
  
  return;
}
