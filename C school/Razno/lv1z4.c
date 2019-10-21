#include <stdio.h>
int main(){
  char znak;
  printf("Upisi znak: ");
  scanf(" %c",&znak);
  printf("Upisani znak je: %c,\nnjegov ASCII kod je: %d",znak,znak);
  return 0;
}
