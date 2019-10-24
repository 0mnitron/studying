#include <stdio.h>
int main(){
  int a,des,jed;
  printf("Upisi dvoznamenkasti broj: ");
  scanf("%d",&a);
  des = a / 10;
  jed = a % 10;
  if(des==jed){
    printf("Znamenke broja su iste");
  }else if(des > jed){
    printf("%d",des+jed);
  }else if(des < jed){
    printf("%d",des*jed);
  }
  return 0;
}
