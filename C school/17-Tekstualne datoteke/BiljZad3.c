#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *fp;
  char ime[15], prezime[15];
  int i;
  float uspjeh[5], zbr=0, arsr;

  fp=fopen("ucenici.txt","w");
  if(fp==NULL){
    printf("\nGreska pri otvaranju datoteke.");
    exit(1);
  }
  for(i=0; i<5; i++){
    printf("\nUpisi ime i prezime ucenika i njegov uspjeh: ");
    scanf("%s %s %f",ime, prezime, &uspjeh[i]);
    fprintf(fp,"\n%s %s %f", ime, prezime, uspjeh[i]);
  }

  fclose(fp);

  fp=fopen("ucenici.txt","r");

  if(fp==NULL){
    printf("\nGreka pri otvaranju datoteke.");
    exit(1);
  }

  for(i=0; i<5; i++){
    fscanf(fp,"%s %s %f",ime, prezime, &uspjeh[i]);
    zbr = zbr + uspjeh[i];
  }
  arsr = (float)zbr/5;
  fclose(fp);

  fp=fopen("ucenici.txt","r");
  if(fp==NULL){
    printf("\nGreka pri otvaranju datoteke.");
    exit(1);
  }
  printf("\nUcenici s prosjekom vecim od prosjeka prosjeka ucenika: ");
  for(i=0; i<5; i++){
    fscanf(fp,"%s %s %f",ime, prezime, &uspjeh[i]);
    if(uspjeh[i] > arsr){
      printf("\n%s  %s (%.2f)", ime, prezime, uspjeh[i]);
    }
  }
  fclose(fp);

  return 0;
}
