#include <stdio.h>
void fprost(char zn);
int main(){
  char zn;
  int i;

  for(i=0; i<100; i++){
    printf("\nUpisi %d. znak: ",i+1);
    scanf(" %c", &zn);
    fprost(zn);
  }

  return 0;
}

void fprost(char zn){
  int i, prost=0;
  int kod;

  if((zn >= 'A' && zn <= 'Z') || (zn >= 'a' && zn <= 'z')){
    kod = (int)zn;

    for(i=2; i<=kod/2; i++){
      if(kod%i==0){
        prost=1;
        break;
      }
    }
     
    if(prost==0){
      printf("\nANSCII kod upisanog slova %c je prosti broj.",zn);
    }else{
      printf("\nANSCII kod upisanog slova %c nije prosti broj.",zn);
    }
  }

  return;
}
