#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], slovo;
  int i, n, ima=0;

  printf("\nUpisi recenicu: ");
  gets(rec);
  n = strlen(rec);

  printf("\nUpisi slovo: ");
  scanf(" %c", &slovo);

  for(i=n; i>=0; i--){
    if(rec[i] == ' '){
      break;
    }
    else if(rec[i] == slovo){
      ima = 1;
      break;
    }
  }

  if(ima == 1){
    printf("\nU posljednjoj rijeci se pojavljuje naknadno upisano slovo.");
  }else{
    printf("\nU posljednjoj rijeci se ne pojavljuje naknadno upisano slovo.");
  }

  return 0;
}
