#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	float br, arsr;
	int i, pbr, tis,sto,des, nep=0, zbr=0;
	FILE *fp;

	fp = fopen("brojevi.txt","w+");
	if(fp == NULL){
		printf("\nGreska kod otvaranja datoteke.");
		exit(1);
	}

	for(i=0; i<5; i++){
		printf("\nUpisi %d. broj: ",i+1);
		scanf("%f", &br);
		fwrite(&br, sizeof(br), 1, fp);
	}

	printf("\nUpisi prirodan broj iz intervala [0,4]: ");
	scanf("%d", &pbr);

	fseek(fp, -(pbr+1)*sizeof(br), SEEK_END);
	fread(&br, sizeof(br), 1, fp);

	tis = (int)(br*1000)%10;
	sto = (int)(br*100)%10;
	des = (int)(br*10)%10;

	if(tis%2 != 0){
		zbr = zbr+tis;
		nep++;
	}
	if(sto%2 != 0){
		zbr = zbr+sto;
		nep++;
	}
	if(des%2 != 0){
		zbr = zbr+des;
		nep++;
	}

	arsr = (float)zbr/nep;

	printf("\nAritmeticka sredina neparnih znamenki broja %.3f je %.2f", br, arsr);

	return 0;
}
