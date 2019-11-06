#include <stdio.h>
int main(){
  char slovo;

  do{
    printf("\nUpisi slovo: ");
    scanf(" %c",&slovo);
  }while( ! ((slovo>='A' && slovo<='Z') || (slovo>='a' && slovo<='z')));

  if(slovo>='A' && slovo <='Z'){
    printf("\nUpisano je veliko slovo.");
  }else{
    printf("\nUpisano je malo slovo.");
  }

  return 0;
}
