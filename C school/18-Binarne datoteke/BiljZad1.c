#include<stdio.h>
#include<stdlib.h> 
struct ucenik {
  char ime[15];
  char prez[15];
  int izo;
};
int main(){ 
  struct ucenik uc; 
  FILE *fp; 
  int i,n; 
  fp = fopen("ucenici.dat","w"); 
  if(fp == NULL){ 
    printf("\nGreska pri otvaranju datoteke"); 
    exit(1); 
  }
  printf("\nKoliko je ucenika? ");  
  scanf("%d", &n);
  for(i = 0;i < n; i++){ 
    printf("\nUpisi ime,prezime i broj sati izostanaka:"); 
    scanf("%s %s %d",uc.ime, uc.prez, &uc.izo); 
    fwrite(&uc, sizeof(struct ucenik), 1, fp); 
  }
  fclose(fp); 
  printf("\nU datoteku je upisano:\n"); 
  fp = fopen("ucenici.dat","r"); 
  if(fp == NULL){ 
    printf("\nGreska pri otvaranju datoteke"); 
    exit(1); 
  }
  for(i = 0; i < n; i++){ 
    fread(&uc,sizeof(struct ucenik), 1, fp); 
    printf("\nUcenik: %s %s (%d sati izostanaka)\n", uc.ime, uc.prez, uc.izo); 
  }
  printf("\n");  
  
  return 0;
}
