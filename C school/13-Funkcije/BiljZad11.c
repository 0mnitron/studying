#include <stdio.h>
void fneparne(float br);
int main(){
  float br;
  int i;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. realni broj sa 2 znamenke u cijelom i 2 u decimalnomdijelu broja: ",i+1);
    scanf("%f", &br);
    fneparne(br);
  }
  return 0;
}

void fneparne(float br){
  int des,jed, dest,stot;
  float nbr=0;

  des = (int)br/10;
  jed = (int)br%10;

  dest = (int)(br*10)%10;
  stot = (int)(br*100)%10;

  if(des%2 != 0){
    nbr = des;
  }

  if(jed%2 != 0){
    nbr = nbr*10 + jed;
  }

  if(stot%2 != 0 && dest%2 != 0){
    nbr = nbr + (stot/100.);
  }else if(stot %2 != 0){
    nbr = nbr + (stot/10.);
  }

  if(dest%2 != 0){
    nbr = nbr + (dest/10.);
  }


  if(dest%2 == 0  || stot%2 == 0){
    printf("\n%.1f", nbr);  
  }else{
    printf("\n%.2f", nbr);
  }
  
  return;
}
