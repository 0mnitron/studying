#include <stdio.h>
void aritmeticka(int x);
int main(){
  int br, i;

  for(i=0; i<5; i++){
    printf("\nUpisi %d. troznamenkasti broj: ",i+1);
    scanf("%d", &br);
    aritmeticka(br);
  }

  return 0;
}

void aritmeticka(int x){
  int sto, des, jed, zbroj=0, k=0;
  float arsr;

    sto = x/100;
    des = x%100/10;
    jed = x%10;

    if(sto%2 == 0){
      zbroj = zbroj + sto;
      k++;
    }
    if(des%2 == 0){
      zbroj = zbroj + des;
      k++;
    }
    if(jed%2 == 0){
      zbroj = zbroj + jed;
      k++;
    }

  arsr = (float)zbroj / k;
  if(k != 0){
    printf("\nAritmeticka sredina upisanog broja je: %.2f ", arsr);
  }else{
    printf("\nUpisani broj nema parne znamenke.");
  }
  
  return;
}
