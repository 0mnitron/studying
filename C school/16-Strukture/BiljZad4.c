#include <stdio.h>
struct ucenik {
  char ime[10];
  char prez[20];
  int izo;
};
int main(){
  struct ucenik uc[5], max , min;
  int i;
  
  for(i=0;i<5;i++){ 
    printf("\nUpisi ime, prezimei broj sati izostanaka: ");
    scanf("%s %s%d",uc[i].ime,uc[i].prez, &uc[i].izo);
  }
  
  max=uc[0];
  min=uc[0];
  
  for(i=1;i<5;i++){ 
    if(uc[i].izo > max.izo){
      max = uc[i];
    }
    if(uc[i].izo < min.izo){
      min = uc[i];
    }
  }

  printf("\nUcenik s najvise izostanaka: %s %s(%d sati)",max.ime,max.prez, max.izo);
  printf("\nUcenik s najmanje izostanaka: %s %s(%d sati)",min.ime,min.prez, min.izo);
  
  return 0;
}
