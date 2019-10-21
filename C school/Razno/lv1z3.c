#include <stdio.h>
int main(){
  int a,b,c,z;
  printf("Upisi tri broja: ");
  scanf("%d %d %d",&a,&b,&c);
  z = a + b - c;
  printf("\nRezultat: %d + %d - %d = %d\n",a,b,c,z);
  return 0;
}
