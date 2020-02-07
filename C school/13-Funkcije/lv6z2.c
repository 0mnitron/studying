#include <stdio.h>
void znakovi(char slovo);
int main(){
  char zn[6];
  int i;

  for(i=0; i<6; i++){
    printf("\nUpisi %d. znak: ",i+1);
    scanf(" %c", &zn[i]);
  }

  for(i=0; i<6; i++){
    znakovi(zn[i]);
  }

  return 0;
}

void znakovi(char slovo){
  if(slovo >= 'A' && slovo <= 'Z'){
    printf("\nUpisani znak %c je veliko slovo.", slovo);
  }
  else if(slovo >= 'a' && slovo <= 'z'){
    printf("\nUpisani znak %c je malo slovo.", slovo);
  }else{
    printf("\nUpisani znak %c nije slovo.", slovo);
  }
  
  return;
}
