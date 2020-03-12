#include <stdio.h>
struct ucenik{
  char prezime[10];
  int bodovi;
};
int main(){
  struct ucenik uc1, uc2, uc3, max, min, sred;

  printf("\nUpisi prezime i broj bodova 1. ucenika: ");
  scanf("%s %d", uc1.prezime, &uc1.bodovi);
  printf("\nUpisi prezime i broj bodova 2. ucenika: ");
  scanf("%s %d", uc2.prezime, &uc2.bodovi);
  printf("\nUpisi prezime i broj bodova 3. ucenika: ");
  scanf("%s %d", uc3.prezime, &uc3.bodovi);
  
  max = uc1;
  if(uc2.bodovi > max.bodovi){
    max = uc2;
  }
  if(uc3.bodovi > max.bodovi){
    max = uc3;
  }

  min = uc1;
  if(uc2.bodovi < min.bodovi){
    min = uc2;
  }
  if(uc3.bodovi < min.bodovi){
    min = uc3;
  }

  if(max.bodovi > uc1.bodovi && uc1.bodovi > min.bodovi){
    sred = uc1;
  }
  else if(max.bodovi > uc2.bodovi && uc2.bodovi > min.bodovi){
    sred = uc2;
  }else{
    sred = uc3;
  }

  printf("\nUcenik sa najvise bodova je: %s (bodovi: %d)", max.prezime, max.bodovi);
  printf("\nUcenik sa manje bodova je: %s (bodovi: %d)", sred.prezime, sred.bodovi);
  printf("\nUcenik sa najmanje bodova je: %s (bodovi: %d)", min.prezime, min.bodovi);

  return 0;
}
