#include <stdio.h>
#include <math.h>
struct tocka{
  char S;
  int x;
  int y;
};
int main(){
  struct tocka t[100000];
  int n, i, j;
  int anomalija=-1;
  int brojac=0;

  do{
    printf("\nUpisi koliko tocaka zelis upisati:  ");
    scanf("%d", &n);
  }while(n<1 || n>100000);

  for(i=0; i<n; i++){
    do{
      printf("Upisi naziv za %d. tocku, koordinatu x i koordinatu y (npr. A 4 5): ", i+1);
      scanf(" %c %d %d", &t[i].S, &t[i].x, &t[i].y);
    }while(!(t[i].S>='A' && t[i].S<='Z') || !(t[i].x>=-1000000000 && t[i].x<=1000000000) || !(t[i].y>=-1000000000 && t[i].y<=1000000000));
  }

//... mora pronaći koja je vrijednost anomalija (koja se ponavlja)
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(anomalija != -1){
        break;
      }
      else if(t[i].S == t[j].S && i!=j){
        anomalija = j;
      }
    }
  }

  //zatim mora od te vrijednosti izračinati udaljenost u koordinatnom sustavu
  float d_anomalija;
  d_anomalija = abs(sqrt((float)((0-t[anomalija].x)*(0-t[anomalija].x) + (0-t[anomalija].y)*(0-t[anomalija].y))));   //zagrada množi zagradu zbog potencije (^2)
  //--> udaljenosti moraju biti apsolutne vrijednosti
 
  //određujemo udaljenost za svaku točku i gledamo je li manja od udaljenosti anomalije
  float d;
  for(i=0; i<n; i++){
    if(i != anomalija){
      d = abs( sqrt((float) ((0-t[i].x)*(0-t[i].x) + (0-t[i].y)*(0-t[i].y)) ) );
      if(d < d_anomalija){
        brojac++;
      }
    }
  }
  if(n<2){
    printf("Ima 0 tocaka.");
  }else{
    printf("Ima %d tocaka.",brojac);
  }
  return 0;
}
