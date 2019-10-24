#include <stdio.h>
int main(){
  float br;
  char slovo;
  printf("\nUpisi broj:");
  scanf("%f",&br);
  printf("\nUpisi: ");
  printf("\na-za ispitivanje da li je broj realan");
  printf("\nb-za ispitivanje da li je broj prirodan");
  printf("\nc-za ispitivanje da li je broj negativan cijeli");
  printf("\nd- ako ne zelis ispitati nista");
  scanf(" %c",&slovo);
  
  switch (slovo){
    case 'a' :  if(br!=(int)br){
                  printf("\nBroj je realan");
                }else{
                  printf("\nBroj nije realan");
                }
                break;
                
    case 'b' :  if(br==(int)br && br>0){
                  printf("\nBroj je prirodan");
                }else{
                  printf("\nBroj nije prirodan");
                }
                break;
                
    case 'c' :  if(br==(int)br && br<0){
                  printf("\nBroj je negativan cijeli");
                }else{
                  printf("\nBroj nije negativan ili cijeli");
                }
                break;
                
    case 'd' :  printf("\nKraj programa");
                break;
                
    default  :  printf("\nNisi upisao slovo a,b,c ili d");
  }
  return 0;
}
