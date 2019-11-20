#include <stdio.h>
int main(){
  int ocjene[10][5], max, i, j;

  for(i=0; i<10; i++){
    printf("\nUpisi ocjene za %d. ucenika: ",i+1);
    for(j=0; j<5; j++){
      printf("\n-%d. ocjenu: ",j+1);
      scanf("%d", &ocjene[i][j]);
    }
  }

  for(i=0; i<10; i++){
    max = ocjene[i][0];
    for(j=0; j<5; j++){
      if(max < ocjene[i][j]){
        max = ocjene[i][j];
      }
    }
    printf("\nNajveca ocjenda %d. ucenika je: %d\n", i+1, max);
  }
  
  return 0;
}
