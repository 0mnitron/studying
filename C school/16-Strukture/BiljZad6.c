#include <stdio.h>
struct ucenik{
  char ime[20];
  char prez[20];
  float visina;
};
int main(){
  struct ucenik uc[20];
  int i;
  float zbr=0, pros;

  for(i=0; i<20; i++){
    printf("\nUpisi ime, prezime i visinu ucenika: ");
    scanf("%s %s %f", uc[i].ime, uc[i].prez, &uc[i].visina);
  }

  for(i=0; i<20; i++){
    zbr = zbr + uc[i].visina;
  }

  pros = (float)zbr/20;
  printf("\nProsjecna visina ucenika: %.2f", pros);
  printf("\nUcenici vislji od 1.80 m: ");

  for(i=0; i<20; i++){
    if(uc[i].visina > 1.8){
      printf("\n%s %s (%.2f)", uc[i].ime, uc[i].prez, uc[i].visina);
    }
  }
  
  return 0;
}
