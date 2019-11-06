#include <stdio.h>
int main(){
  char slovo;
  int veliki=0, mali=0;

  printf("\nUpisi prvi znak: ");
  scanf(" %c",&slovo);

  while((slovo >= 'A' && slovo <= 'Z') || (slovo >= 'a' && slovo <= 'z')){
    if(slovo >= 'A' && slovo <= 'Z'){
      veliki++;
    }else{
      mali++;
    }
    printf("\nUpisi sljedeci znak: ");
    scanf(" %c",&slovo);
  }

  if(veliki > mali){
    printf("\nUpisano je vise velikih slova.");
  }else if(veliki < mali){
    printf("\nUpisano je vise malih slova.");
  }else{
    printf("\nUpisan je jednak broj velikih i malih slova.");
  }

  return 0;
}
