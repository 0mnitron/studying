#include <stdio.h>
#include <string.h>
int main() {
    char r[15];
    int i, n;

    printf("\nUpisi rijec:");
    scanf("%s", r);
    n = strlen(r);

    for(i=0; i<n; i++){
        if(i<(n-1)){
            printf("%c*", r[i]);
        } else {
            printf("%c", r[i]);
        } 
    } 

    return 0;
} 
