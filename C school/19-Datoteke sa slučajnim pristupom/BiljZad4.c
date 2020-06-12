#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
  char sl;
  FILE *fp;
  int i;

  fp = fopen("slova.txt","w+");
  if(fp == NULL){
    printf("\nGreska kod otvaranja datoteke");
    exit(1);
  }
  for(i=0; i<5; i++){
    printf("\nUpisi %d. slovo: ",i+1);
    scanf(" %c", &sl);
    fprintf(fp, "%c", sl);
  }

  printf("\nSlova: ");
  for(i=1; i<=5; i++){
    fseek(fp, -i, SEEK_END);
    fscanf(fp, "%c", &sl);
    printf("%c ", sl);
  }

  printf("\n-------------------");
  
  printf("\nASCII kod: ");
  for(i=1; i<=5; i++){
    fseek(fp, -i, SEEK_END);
    fscanf(fp, "%c", &sl);
    printf("%d ", sl);
  }
  
  return 0;
}
