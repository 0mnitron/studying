#include <stdio.h>
int main(){
  int ocjene[10][5], zbroj=0, i, j;
  float ars;

  for(i=0; i<10; i++){
    printf("\nUpisi ocjene za %d. ucenika: ",i+1);
    for(j=0; j<5; j++){
      printf("\n-%d. ocjenu: ",j+1);
      scanf("%d", &ocjene[i][j]);
    }
  }

  for(i=0; i<10; i++){
    zbroj = 0;
    for(j=0; j<5; j++){
      zbroj = zbroj + ocjene[i][j];
    }
    ars = (float)zbroj/5;
    printf("\nProsjecna ocjena za %d. ucenika: %.2f", i+1, ars);
  }
  
  return 0;
}
