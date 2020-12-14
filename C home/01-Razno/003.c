#include <stdio.h>
int main(){
    char mat[100][100];
    int i, j;
    int xi, yj;
    int n = 0;
    char smjer;
    int sizex, sizey;
    printf("Upisi velicinu polja: ");
    scanf("%d %d", &sizex, &sizey);
    printf("Upisi P (x y): ");
    scanf("%d %d", &xi, &yj);  
    printf("\nUpisi smjer: (D, L, U, R) ");
    scanf(" %c", &smjer);

    if(smjer == 'R'){
        n = yj;
        for(i=xi; i<sizex; i++){
            for(j=n; j<sizey; j++){
                mat[i][j] = 'x';
            }
            n = n+2;
        }

        n = yj;
        for(i=xi; i>=0; i--){
            for(j=n; j<sizey; j++){
                mat[i][j] = 'x';
            }
            n = n+2;
        }
    }
    else if(smjer == 'L'){
        n=yj;
        for(i=xi; i<sizex; i++){
            for(j=n; j>=0; j--){
                mat[i][j] = 'x';
            }
            n = n-2;
        }

        n=yj;
        for(i=xi; i>=0; i--){
            for(j=n; j>=0; j--){
                mat[i][j] = 'x';
            }
            n = n-2;
        }
    }
    else if(smjer == 'D'){
        n=xi;
        for(j=yj; j<sizey; j++){
            for(i=n; i<sizex; i++){
                mat[i][j] = 'x';
            }
            n = n+2;
        }

        n=xi;
        for(j=yj; j>=0; j--){
            for(i=n; i<sizex; i++){
                mat[i][j] = 'x';
            }
            n = n+2;
        }
    }
    else if(smjer == 'U'){
        n=xi;
        for(j=yj; j<sizey; j++){
            for(i=n; i>=0; i--){
                mat[i][j] = 'x';
            }
            n = n-2;
        }

        n=xi;
        for(j=yj; j>=0; j--){
            for(i=n; i>=0; i--){
                mat[i][j] = 'x';
            }
            n = n-2;
        }
    }

    for(i=0; i<sizex; i++){
        for(j=0; j<sizey; j++){
            if(mat[i][j] == 'x'){
                printf("%c", mat[i][j]);
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}
