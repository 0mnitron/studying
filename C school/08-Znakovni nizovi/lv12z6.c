#include <stdio.h>
#include <string.h>
int main(){
  char r1[15], r2[15], r3[15];
  int i, e1=0, e2=0, e3=0;

  printf("\nUpisi tri rijeci: ");
  scanf("%s %s %s",r1, r2, r3);

  for(i=0; i<15; i++){
    if(r1[i] == 'e')
      e1++;
    
    if(r2[i] == 'e')
      e2++;

    if(r3[i] == 'e')
      e3++;

  }

  if(e1 > e2 && e1 > e3)
    printf("\n%s", r1);

  if(e2 > e1 && e2 > e3)
    printf("\n%s", r2);

  if(e3 > e1 && e3 > e2)
    printf("\n%s", r3);
  
  return 0;
}
