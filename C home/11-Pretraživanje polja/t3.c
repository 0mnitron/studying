#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], slovo;
  int i, n, ima=0, raz=0;

  printf("\nUcitaj recenicu: ");
  gets(rec);
  n = strlen(rec);

  printf("\nUpisi slovo: ");
  scanf(" %c", &slovo);

  for(i=n; i>=0; i--){
    if(rec[i] == ' '){
      raz++;
    }
    if(raz==2 && rec[i]==slovo && (rec[i] == 'a' || rec[i] == 'e' || rec[i] == 'i' || rec[i] == 'o' || rec[i] == 'u'  ||  rec[i] == 'A' || rec[i] == 'E' || rec[i] == 'I' || rec[i] == 'O' || rec[i] == 'U') ){
      ima = 1;
      break;
    }
  }

  if(ima == 1){
    printf("\nNaknadno upisano slovo %c se pojavljuje medu samoglasnicima u predpredzadnoj rijeci.", slovo);
  }else{
    printf("\nNaknadno upisano slovo %c se ne pojavljuje medu samoglasnicima u predpredzadnjoj rijeci.", slovo);
  }

  return 0;
}
