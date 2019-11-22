#include <stdio.h>
int main(){
  int i, j, n, m;
  float a[4][4], x;

  do{
    printf("\nZadaj broj redova i broj stupaca matrice: ");
    scanf("%d", &n);
    m = n;
  }while(n <= 0 || n > 4);

  printf("\nZadaj elemente matrice: \n");
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("a[%d][%d]= ",i,j);
      scanf("%f", &x);
      a[i][j] = x;
    }
  }

  printf("\nZadana matrica je:\n");
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("%.2f\t", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
