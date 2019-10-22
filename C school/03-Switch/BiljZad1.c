#include <stdio.h>
int main(){
  int a,b,zbroj,razlika,umnozak,sel;
  float kvocjent;
  printf("\nUpisi dva broja: ");
  scanf("%d %d",&a,&b);
  
  printf("\nUpisi: ");
  printf("\n 1-za zbrajanje");
  printf("\n 2-za mnozenje");
  printf("\n 3-za oduzimanje");
  printf("\n 4-za dijeljenje");
  scanf("%d",&sel);
  
  switch (sel){
    case 1: zbroj=a+b;
            printf("\nZbroj je %d",zbroj);
            break;
    
   case 2:  umnozak=a*b;
            printf("\nUmnozak je %d",umnozak);
            break;
  
   case 3:  razlika=a-b;
            printf("\nRazlika je %d",razlika);
            break;
  
   case 4:  if(b==a){
              printf("\nDjeljenje nije moguce.");
            }else{
              kvocjent=(float)a/b;
              printf("\nKvocijent je %f",kvocjent);
            }
            break;
  default:  printf("\nNisi upisao 1,2,3, ili 4");
  }
  
  return 0;
}
