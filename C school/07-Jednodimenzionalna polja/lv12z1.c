#include <stdio.h>
#include <string.h>
int main(){
  char r[15];
  int i,n,brsam=0;

  printf("\nUcitaj rijec: ");
  scanf("%s",r);
  n = strlen(r);

  for(i=0; i<n; i++){
    if(r[i]=='a' || r[i]=='e' || r[i]=='i' || r[i]=='o' || r[i]=='u'){
      brsam++;
    }
    if(r[i]=='A' || r[i]=='E' || r[i]=='I' || r[i]=='O' || r[i]=='U'){
      brsam++;
    }
  }

  printf("\nUpisana rijec sadrzi %d samoglasnika.",brsam);
  return 0;
}
