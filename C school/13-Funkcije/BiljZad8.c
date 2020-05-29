#include <stdio.h>
#include <math.h>
void jednakostranicni(int Ax, int Ay, int Bx, int By);
int main(){
  int i, Ax, Ay, Bx, By;
  
  for(i=0; i<100; i++){
    printf("\nUpisi koordinate 2 vrha trokuta (Ax,Ay Bx,By): ");
    scanf("%d,%d %d,%d", &Ax, &Ay, &Bx, &By);
    jednakostranicni(Ax, Ay, Bx, By);
  }

  return 0;
}

void jednakostranicni(int Ax, int Ay, int Bx, int By){
  float a, P, O;

  a = sqrt((Bx-Ax)*(Bx-Ax) + (By-Ay)*(By-Ay));
  O = 3*a;
  P = (sqrt(3)*a*a)/4;

  printf("\nPovrsina trokuta je: %.2f \nOpseg trokuta je: %.2f", P,O);

  return;
}
