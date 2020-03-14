#include <stdio.h>
struct ucenik{
  char ime[10];
  int ocj;
};
int main(){
  struct ucenik uc1, uc2, uc3;
  char slovo;
  int ima=0;

  printf("\nUpisi ime i ocjenu za 1. ucenika: ");
  scanf("%s %d", uc1.ime, &uc1.ocj);
  printf("\nUpisi ime i ocjenu za 2. ucenika: ");
  scanf("%s %d", uc2.ime, &uc2.ocj);
  printf("\nUpisi ime i ocjenu za 3. ucenika: ");
  scanf("%s %d", uc3.ime, &uc3.ocj);

  printf("\nUpisi jos jedno slovo: ");
  scanf(" %c", &slovo);

  if(uc1.ime[0] == slovo){
    ima=1;
    printf("\nSa naknadno upisanim slovom pocinje ime ucenika: %s (Ocjena: %d)", uc1.ime, uc1.ocj);
  }
  if(uc2.ime[0] == slovo){
    ima=1;
    printf("\nSa naknadno upisanim slovom pocinje ime ucenika: %s (Ocjena: %d)", uc2.ime, uc2.ocj);
  }
  if(uc3.ime[0] == slovo){
    ima=1;
    printf("\nSa naknadno upisanim slovom pocinje ime ucenika: %s (Ocjena: %d)", uc3.ime, uc3.ocj);
  }
  if(ima == 0){
    printf("\nNaknadno upisanim slovom ne pocinje ime niti jednog ucenika.");
  }

  return 0;
}
