#include <stdio.h>
int potenciranje (int x, int y);
int main(){
  int a, b, pot;

  printf("\nUnesi broj za potenciranje i njegovu potenciju: ");
  scanf("%d %d", &a, &b);

  pot = potenciranje (a, b);

  printf("\nPotencirani broj: %d", pot);

  return 0;
}

int potenciranje (int x, int y){
  int rez, i;

  rez = x;

  if(y == 0){
    rez = 1;
  }else {
    for(i=1; i<y; i++){
      rez = rez * x;
    }
  }

  return rez;
}
