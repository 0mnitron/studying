#include <stdio.h>
int main(){
  float br;
  int sto;
  printf("Upisi cijeli troznamenkasti broj: ");
  scanf("%f",&br);
  if(br!=(int)br || br>=1000 || br<=99){
    printf("\nBroj nije troznamenkasti cjeli.");
  }else{
    sto=br/100;
    if(sto%2==0){
      printf("Broj je paran.");
    }else{
      printf("Broj nije paran.");
    }
  }
  return 0;
}
