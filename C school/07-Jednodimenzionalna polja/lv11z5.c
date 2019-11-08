#include <stdio.h>
int main(){
  int a[5], b[5], c[5], i;

  for(i=0; i<5; i++){
    printf("\nUpisi broj u prvo polje: ");
    scanf("%d",&a[i]);

    printf("\nUpisi broj u drugo polje: ");
    scanf("%d",&b[i]);

    c[i] = a[i] + b[i];
  }

  printf("\nZbroj prvog i drugog polja: ");
  for(i=0; i<5; i++){
    printf("\n%d = %d + %d ", c[i], a[i], b[i]);
  }

  return 0;
}
