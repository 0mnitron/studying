#include <stdio.h>
struct ucenik{
  char prez[20];
  float pros;
};
int main(){
  struct ucenik uc[30], t;
  int i, j, n, zbr=0;
  float arsr;
  char sl[30];

  printf("\nUpisi koliko je ucenika u razredu: ");
  scanf("%d", &n);

  for(i=0; i<n; i++){
    printf("\nUpisi prezime ucenika i njegov ukupni prosjek: ");
    scanf("%s %f", uc[i].prez, &uc[i].pros);
    zbr = zbr + (int)uc[i].pros;
    if(uc[i].pros - (int)uc[i].pros >= 0.5){
      zbr = zbr + 1;
    }
    sl[i] = uc[i].prez[0];
  }
  arsr = (float)zbr/n;

  if(arsr >= 4.0){
    for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){
        if(sl[i] > sl[j]){
          t = uc[i];
          uc[i] = uc[j];
          uc[j] = t;
        }
      }
    }
  }else{
    for(i=0; i<n-1; i++){
      for(j=i+1; j<n; j++){
        if(uc[i].pros < uc[j].pros){
          t = uc[i];
          uc[i] = uc[j];
          uc[j] = t;
        }
      }
    }
  }

  for(i=0; i<n; i++){
    printf("\n%s (%.2f)", uc[i].prez, uc[i].pros);
  }

  return 0;
}
