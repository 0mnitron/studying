#include <stdio.h>
int main(){
  char znak;
  printf("\nUpisi znak: ");
  scanf(" %c",&znak);
  if(znak>='A' && znak<='Z'){
    printf("\nUpisano je veliko slovo");
  }else{
    printf("\nNije upisano veliko slovo");
  }
  return 0;
}
