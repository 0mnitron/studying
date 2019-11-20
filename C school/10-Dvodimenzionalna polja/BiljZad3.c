#include <stdio.h>
int main(){
  int a[100], b[100], c[100], d[100], i;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. troznamenkasti cijeli broj u polje: ",i+1);
    scanf("%d", &a[i]);

    b[i] = a[i] / 100;
    c[i] = a[i] % 100 /10;
    d[i] = a[i] % 10;
  }

  printf("BROJ    STOTICE    DESETICE    JEDINICE\n");
  for(i=0; i<100; i++)
  {
    printf("%d        %d          %d           %d\n", a[i], b[i], c[i], d[i]);
  }

  return 0;
}
