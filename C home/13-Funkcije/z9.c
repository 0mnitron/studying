#include <stdio.h>
#include <math.h>
float hipotenuza(float x, float y);
int main(){
  float a, b, c;

  printf("\nUpisi duljine kateta trokuta: ");
  scanf("%f %f", &a, &b);
  c = hipotenuza(a,b);
  printf("\nHipotenuza trokuta je: %.4f", c);

  return 0;
}

float hipotenuza(float x, float y){
  float z;

  z = sqrt(x*x + y*y);
  
  return z;
}
