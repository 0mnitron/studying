#include <stdio.h>
int main(){
  float realni,srednja;
  int desetnina, stotnina, tisucnina;
  printf("Upisi realan broj: ");
  scanf("%f",&realni);
  
  tisucnina = (int)(realni*1000)%10;
  stotnina = (int)(realni*100)%10;
  desetnina = (int)(realni*10)%10;
  
  srednja = (float)(desetnina + stotnina + tisucnina) / 3;
  
  printf("\nAritmeticka sredina desetnina, stotnina i tisucnina broja %f je %.2f\n",realni, srednja);
  return 0;
}
