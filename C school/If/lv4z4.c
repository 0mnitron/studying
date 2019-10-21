#include <stdio.h>
int main(){
  int br;
  printf("Upisi bilo koji cijeli broj: ");
  scanf("%d",&br);
  if(br%7==0){
    printf("nedjelja\n");
  }
  if(br%7==1){
    printf("ponedjeljak\n");
  }
  if(br%7==2){
    printf("utorak\n");
  }
  if(br%7==3){
    printf("srijeda\n");
  }
  if(br%7==4){
    printf("cetvrtak\n");
  }
  if(br%7==5){
    printf("petak\n");
  }
  if(br%7==6){
    printf("subota\n");
  }
  return 0;
}
