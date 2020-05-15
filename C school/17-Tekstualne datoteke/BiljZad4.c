#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *fp;
  char naziv[10], ime[15], prezime[15];
  int i, izostanci, zbr=0;
  float uspjeh, arsr;
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
  

  fp=fopen("ucenici.txt","w");
  if(fp==NULL){
    printf("\nGreska pri otvaranju datoteke.");
    exit(1);
  }
  for(i=0; i<5; i++){
    printf("\nUpisi ime i prezime ucenika i njegov uspjeh: ");
    scanf("%s %s %f",ime, prezime, &uspjeh);
    fprintf(fp,"\n%s %s %f", ime, prezime, uspjeh);
  }
  fclose(fp);

  fp=fopen("ucenici.txt","r");
  if(fp==NULL){
    printf("\nGreska pri otvaranju datoteke.");
    exit(1);
  }
  printf("\nUcenici koji su prosli razred s odlicnim uspjehom:");
  for(i=0; i<5; i++){
    fscanf(fp,"%s %s %f",ime, prezime, &uspjeh);
    if(uspjeh >= 4.5){
      printf("\n%s %s", ime, prezime);
    }
  }
  fclose(fp);

  return 0;
}
