#include <stdio.h>

int dani, i, temp, temp2;

int main(){
    scanf("%d", &dani);
    scanf("%d", &temp);
    for(i=1; i<dani; i++){
        scanf("%d", &temp2);
        if(temp2 < temp){
            temp = temp2;
        }
    }
    printf("%d", temp);
    return 0;
}
