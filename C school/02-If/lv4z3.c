#include <stdio.h>
int main(){
  int a,b,suma,razlika,produkt;
  printf("Upisi dva broja: ");
  scanf("%d %d",&a,&b);
  if(a%2==0 && b%2==0){
    suma = a + b;
    printf("Suma brojeva je %d\n",suma);
  }else if(a%2==0 && b%2!=0){
    razlika = a - b;
    printf("Razlika brojeva je %d\n",razlika);
  }else if(a%2!=0 && b%2==0){
    produkt = a * b;
    printf("Produkt brojeva je %d\n",produkt);
  }else{
    printf("Ucitana su dva neparna broja.\n");
  }
  return 0;
}
