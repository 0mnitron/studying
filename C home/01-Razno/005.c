#include <stdio.h>

int kolicina, n;

int main(){
    scanf("%d",&kolicina);
    n = kolicina / 3;
    if(kolicina/3 != kolicina/3.0){
        n = n+1;
    }
    printf("%d", n);
    
    return 0;
}
