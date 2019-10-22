#include <stdio.h>
int main(){
  float br;
  char sel;
  printf("Upisi broj:\n");
  scanf("%f",&br);
  printf("Upisi:\n");
  printf("a-za ispitivane da li je broj prirodan\n");
  printf("b-za ispitivanje da li je broj realan\n");
  printf("c-za ispitivanje da li je broj negativan cjeli\n");
  scanf(" %c",&sel);
  
  switch (sel){
    case 'a': if(br==(int)br && br>0)
                printf("Broj je prirodan\n");
              else
                printf("Broj nije prirodan\n");
              break;
              
    case 'b': if(br!=(int)br)
                printf("Broj je realan\n");
              else
                printf("Broj nije realan\n");
              break;  
                
    case 'c': if(br==(int)br && br<0)
                printf("Broj je negativan cjeli\n");
              else
                printf("Broj nije negativan cjeli\n");
              break;
    default:  printf("Nisi upisao slovo a,b ili c\n");
  }
  return 0;
}
