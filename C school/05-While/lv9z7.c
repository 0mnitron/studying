#include <stdio.h>
int main(){
  char zn;
  int n=0;

  printf("\nUpisi prvi znak: ");
  scanf(" %c",&zn);

  while(zn != 'z' && zn != 'Z'){
    n++;
    printf("\nUcitani znak je znak '%c' , njegov ASCII kod je %d ",zn,zn);

    printf("\nUpisi sljedeci znak: ");
    scanf(" %c",&zn);
  }

  printf("\nUkupno je bilo upisano %d znakova.",n);
  return 0;
}
