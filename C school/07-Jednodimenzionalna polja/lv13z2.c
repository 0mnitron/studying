#include <stdio.h>
int main(){
  int a[100], i, zbroj=0, n;

  printf("\nUpisi koliko zelis brojeva upisati u polje: ");
  scanf("%d",&n);

  for(i=0; i<n; i++){
    printf("\nUpisi %d. broj u polje: ",i+1);
    scanf("%d", &a[i+1]);

    if(i%2 == 0 && i != 0){
      zbroj = zbroj + a[i];
    }
  }

  printf("\nZbroj brojeva iz polja sa parnih pozicija: %d",zbroj);
  return 0;
}
