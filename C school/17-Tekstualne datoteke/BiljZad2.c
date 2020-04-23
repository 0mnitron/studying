#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *fp;
  char naziv[10];
  int i, izostanci, zbr=0;
  float arsr;
  fp=fopen("razredi.txt","w");
  if(fp==NULL){
    printf("\nGreska pri otvaranju datoteke.");
    exit(1);
  }
  for(i=0; i<5; i++){
    printf("\nUpisi naziv razreda i broj izostanaka:");
    scanf("%s %d",naziv, &izostanci);
    fprintf(fp,"\n%s %d", naziv, izostanci);
  }

  fclose(fp);

  fp=fopen("razredi.txt","r");

  if(fp==NULL){
    printf("\nGreka pri otvaranju datoteke.");
    exit(1);
  }

  for(i=0; i<5; i++){
    fscanf(fp,"%s %d",naziv, &izostanci);
    zbr = zbr + izostanci;
  }
  arsr = (float)zbr/5;
  printf("\nUkupan broj izostanaka: %d", zbr);
  printf("\nProsjecan broj izostanaka: %.2f", arsr);
  printf("\nRazredi sa izostancima manjim od prosjeka:");
  fclose(fp);
  fp=fopen("razredi.txt","r");
  if(fp==NULL){
    printf("\nGreka pri otvaranju datoteke.");
    exit(1);
  }
  for(i=0; i<5; i++){
    fscanf(fp,"%s %d",naziv, &izostanci);
    if(izostanci < arsr){
      printf("\n%s (%d)", naziv, izostanci);
    }
  }
  fclose(fp);

  return 0;
}
