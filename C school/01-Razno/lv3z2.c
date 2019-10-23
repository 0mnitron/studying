#include <stdio.h>
#include <math.h>
int main(){
  float a,kvadrat,korijen,kub;
  
  printf("Upisi pozitivan realan broj: ");
  scanf("%f",&a);
  
  kvadrat = a*a;
  kub = a*a*a;
  korijen = sqrt(a);
  
  printf("\nKvadrat je: %.2f, kub je: %.2f, a korijen je: %.2f\n",kvadrat,kub,korijen);
  
  return 0;
}
