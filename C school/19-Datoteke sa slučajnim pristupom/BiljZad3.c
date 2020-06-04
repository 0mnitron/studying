#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
  float br;
  int i, br2;

  FILE *fp;
  FILE *dp;

  fp = fopen("brojevi.txt","w+");
  if(fp == NULL){
    printf("\nGreska kod otvaranja datoteke.");
    exit(1);
  }
  for(i=0; i<5; i++){
    printf("\nUpisi %d. broj: ", i+1);
    scanf("%f", &br);
    fwrite(&br, sizeof(br), 1, fp);
  }

  dp = fopen("brojevi2.txt","w+");
  if(dp == NULL){
    printf("\nGreska kod otvaranja datoteke.");
    exit(1);
  }
  fseek(fp, 0, SEEK_SET);
  for(i=0; i<5; i++){
    fread(&br, sizeof(br), 1, fp);
	br2 = (int)br;
	fwrite(&br2, sizeof(br2), 1, dp);
  }
 
  fseek(dp, 0, SEEK_SET);
  for(i=0; i<5; i++){
	fread(&br2, sizeof(br2), 1, dp);
	printf("%d ", br2);
  }

  fclose(dp);
  fclose(fp);

  return 0;
}
