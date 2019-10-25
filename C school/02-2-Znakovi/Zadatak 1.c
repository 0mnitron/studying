#include <stdio.h>
int main(){
  char znak;
  printf("\nUpisi znak: ");
  scanf(" %c",&znak);
  if(znak==65 || znak==97){   //ili if(znak=='A' || znak=='a')
    printf("\nUpisano je slovo 'a' ");  
  }else{
    printf("\nNije upisano slovo 'a' ");
  }
  return 0;
}
