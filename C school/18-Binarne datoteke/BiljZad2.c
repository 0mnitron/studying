#include<stdio.h>
#include<stdlib.h> 
struct razredi {
  char naziv[3];
  int ucenice;
  int ucenici;
};
int main(){ 
  struct razredi raz, max, min; 
  FILE *fp; 
  int i; 
  
  fp = fopen("razredi.dat","w"); 
  if(fp == NULL){ 
    printf("\nGreska pri otvaranju datoteke"); 
    exit(1); 
  }

  for(i=0; i<10; i++){ 
    printf("\nUpisi oznaku razreda, broj ucenica i broj ucenika: "); 
    scanf("%s %d %d", raz.naziv, &raz.ucenice, &raz.ucenici); 
    fwrite(&raz, sizeof(struct razredi), 1, fp); 
  }
  fclose(fp); 


  printf("\nRazred \tUkupan broj ucenika \tBroj ucenica \tBroj ucenika\n"); 
  
  
  fp = fopen("razredi.dat","r"); 
  if(fp == NULL){ 
    printf("\nGreska pri otvaranju datoteke"); 
    exit(1); 
  }
  
  max = raz;
  min = raz;

  for(i=0; i<10; i++){ 
    fread(&raz, sizeof(struct razredi), 1, fp); 
    
    if(raz.ucenici+raz.ucenice > max.ucenici+max.ucenice){
      max = raz;
    }
    if(raz.ucenici+raz.ucenice < min.ucenici+min.ucenice){
      min = raz;
    }

    printf("\n%s \t%d \t%d \t%d\n", raz.naziv, raz.ucenice+raz.ucenici, raz.ucenice, raz.ucenici); 
  }
  printf("\n Razred s najvise ucenika: %s (Z: %d M: %d) \nRazred s najmanje ucenika: %s (Z: %d M: %d)",max.naziv, max.ucenice, max.ucenici, min.naziv, min.ucenice, min.ucenici);
  return 0; 
} 
