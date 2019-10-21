#include <stdio.h>
int main(){
  int x,met,dec,cent,milimet;
  printf("Upisi broj u milimetrima: ");
  scanf("%d",&x);
  met = x/1000;
  dec = (x%1000)/100;
  cent = (x%1000)%100/10;
  milimet = x%10;
  printf("\nU %d mm ima: ",x);
  printf("\n %d m",met);
  printf("\n %d dm",dec);
  printf("\n %d cm",cent);
  printf("\n %d mm",milimet);
  return 0;
}
