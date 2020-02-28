#include <stdio.h>
#include <string.h>
void zamjena(char x[100]);
int main(){
  char rec[100];
  int i, n;

  printf("\nUpisi recenicu: ");
  gets(rec);

  zamjena(rec);
  return 0;
}

void zamjena(char x[100]){
  int i, n;
  char rez;

  n = strlen(x);

  for(i=0; i<n; i++){

    if(x[i] >= 'A' && x[i] <= 'Z'){
      if(x[i+1] != ' '){
        if(x[i+1] >= 'A' && x[i+1] <= 'Z'){
          printf("%c", rez = x[i+1] + ('a' - 'A'));
        }
        else{
          printf("%c", x[i+1]);    
        }
      }

      else{
        if(x[i+2] >= 'A' && x[i+2] <= 'Z'){
          printf("%c", rez = x[i+2] + ('a' - 'A'));
        }
        else{
          printf("%c", x[i+2]);    
        }
      }
    }

    else if(x[i] >= 'a' && x[i] <= 'z'){
      if(x[i-1] != ' '){
        if(x[i-1] >= 'a' && x[i-1] <= 'z'){
         printf("%c", x[i-1] - ('a' - 'A'));
        }
        else{
         printf("%c", x[i-1]);
        } 
      }
  
      else{
        if(x[i-2] >= 'a' && x[i-2] <= 'z'){
          printf("%c", x[i-2] - ('a' - 'A'));
        }
        else{
          printf("%c", x[i-2]);
        }
      }
    }

    else{
      printf("%c", x[i]);
    }
  }

  return;
}
