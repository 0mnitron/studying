#include <stdio.h>
#include <math.h>
int main(){
  int x1,y1, x2,y2;
  float d;
  
  printf("\nUpisi koordinate tocke A i koordinate tocke B:\n");
  scanf("%d,%d %d,%d",&x1,&y1, &x2,&y2);
  
  d = sqrt((float)(x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
  printf("\nUdaljenost ovih tocaka u koordinatnom sustavu je:\n%.2f\n",d);
  return 0;
}
