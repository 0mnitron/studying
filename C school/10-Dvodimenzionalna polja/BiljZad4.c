#include <stdio.h>
int main(){
  char rec[100];
  int n, i, m=0;

  printf("\nUpisi recenicu: ");
  gets(rec);
  n = strlen(rec);

  for(i=0; i<n; i++){
    if(rec[i] == ' ')
    {
      break;
    }
    if(rec[i] == 'm' || rec[i] == 'M')
    {
      m++;
    }
  }

  if(m != 0)
  {
    printf("\nU prvoj rijeci je upisano %d slova m", m);
  }
  
  return 0;
}
