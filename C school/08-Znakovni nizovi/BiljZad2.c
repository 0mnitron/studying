#include <stdio.h>
int main() {
    char r[15];
    int i, n;
    printf("\nUpisi rijec:");
    scanf("%s",r);

    for(i=0; i<15; i++);
        if(r[i] != '\0'){
            n++;
        } 
        else{
            break;
        } 
     } 
    printf("\nU upisanoj rijeci ima %d slova", n);

    return 0;
} 
