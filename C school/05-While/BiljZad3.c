#include <studio.h>
int main() {
    int br, sto, des, jed;
    float sred;
    printf("Upisi prvi troznamenkasti broj: ");
    scanf("%d", &br);
    while(br>=100 && br<=999){
        sto=br/100;
        des=br%100/10;
        jed=br%10;
        sred=(float) (sto+des+jed) / 3;
        printf("Aritmeticka sredina je %.2f",sred);
        printf("Upisi sljedeći troznamenkasti broj:");
        scanf("%d", &br);
    }
    return 0;
} 
