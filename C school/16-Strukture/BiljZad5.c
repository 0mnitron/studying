#include <stdio.h>
struct ucenik{
  char ime[20];
  char prez[20];
  float uspjeh;
};
int main(){
  struct ucenik uc[20];
  int i, ima5=0, ima1=0;

  for(i=0; i<20; i++){
    printf("\nUpisi ime, prezime i uspjeh na polugodistu: ");
    scanf("%s %s %f", uc[i].ime, uc[i].prez, &uc[i].uspjeh);
  } 

  for(i=0; i<20; i++){
    if(uc[i].uspjeh >= 4.5){
      ima5++;
    }
    if(uc[i].uspjeh < 1.5){
      ima1++;
    }
  }

  if(ima5 != 0){
    printf("\nUcenici sa odlicnim uspjehom na polugodistu: ");
    for(i=0; i<20; i++){
      if(uc[i].uspjeh >= 4.5){
        printf("\n%s %s (%.2f)", uc[i].ime, uc[i].prez, uc[i].uspjeh);
      }
    }
  }else{
    printf("\nNema ucenika sa odlicnim uspjehom na polugodistu.");
  }

  if(ima1 != 0){
    printf("\nUcenici koji nisu prosli razred: ");
    for(i=0; i<20; i++){
      if(uc[i].uspjeh < 1.5){
        printf("\n%s %s (%.2f)", uc[i].ime, uc[i].prez, uc[i].uspjeh);
      }
    }
  }else{
    printf("\nSvi ucenici su prosli razred.");
  }

  return 0;
}
