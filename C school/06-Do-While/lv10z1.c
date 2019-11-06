#include <stdio.h>
int main(){
  int brojilo=0, i=50;

  do{
    while(i<=100){
      if(i%9 == 0){
        brojilo++;
      }
      i++;
    }
  }while(i<=100 && i>=50);

  printf("\n%d brojeva zadovoljava uvjet.",brojilo);
  return 0;
}
