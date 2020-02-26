#include <stdio.h>
void zamjena(char x);
int main(){
  char zn;
  int i;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. znak: ", i+1);
    scanf(" %c", &zn);
    zamjena(zn);
  }
  return 0;
}

void zamjena(char x){
  if(x >= 'a' && x <= 'z'){
    x = x - ('a' - 'A');
  }
  else if(x >= 'A' && x <= 'Z'){
    x = x + ('a' - 'A');
  }

  printf("%c", x);

  return;
}
