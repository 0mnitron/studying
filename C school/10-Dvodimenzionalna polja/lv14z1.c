#include <stdio.h>
int main(){
  int i, j, n, m;
  float a[10][10], x;

  do{
    printf("\nZadaj broj redova i broj stupaca matrice: ");
    scanf("%d %d", &n, &m);
  }while(n <= 0 || m <= 0 || n > 10 || m > 10);

  printf("\nZadaj elemente matrice: ");
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("\na[%d][%d] = ", i,j);
      scanf("%f", &x);
      a[i][j] = x;
    }
  }

  printf("\nZadana matrica je: \n");
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      printf("%.2f\t", a[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
