#include <stdio.h>
int main(){
   int br[10],i;

   for(i=0; i<10; i++){
     printf("\nUpisi broj u polje: ");
     scanf("%d",&br[i]);
   }

   printf("\nParni brojevi i brojevi djeljivi sa tri: ");
   for(i=0; i<10; i++){
     if(br[i]%2 == 0 || br[i]%3 == 0){
       printf("\n%d",br[i]);
     }
   }
   
  return 0;
}
