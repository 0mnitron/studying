#include <stdio.h>
int main(){
  int a[10], i, zbroj=0, ima=0;

  for(i=0; i<10; i++){
    printf("\nUpisi broj u polje: ");
    scanf("%d", &a[i]);

    if(a[i]%3 == 0 || a[i]%5 == 0){
      ima++;
      zbroj = zbroj + a[i];
    }
  }

  printf("\nZbroj %d brojeva je %d",ima,zbroj);
  return 0;
}
