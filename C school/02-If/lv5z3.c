#include <stdio.h>
int main(){
  int br;
  printf("Upisi cjeli broj: ");
  scanf("%d",&br);
  if(br==0){
    printf("Upisani broj je nula.\n");
  }else if(br%2==0){
    printf("%d\n",br+1);
  }else if(br%2!=0){
    printf("%d\n",br-1);
  }
  return 0;
}
