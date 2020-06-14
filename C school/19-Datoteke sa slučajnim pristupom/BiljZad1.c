#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	char zn;
	FILE *fp;
	int i,n;

	fp = fopen("proba.txt","w+");
	if(fp == NULL){
		printf("\nGreska kod otvaranja datoteke.");
		exit(1);
	}

	for(i=0; i<10; i++){
		printf("\nUpisi %d. znak: ",i+1);
		scanf(" %c", &zn);
		fprintf(fp, "%c", zn);
	}

	fseek(fp, 0, SEEK_END);
	n = ftell(fp);

	printf("\nZnakovi iz datoteke obrnutim redoslijedom: \n");
	for(i=1; i<=n; i++){
		fseek(fp, -i, SEEK_END);
		fscanf(fp, "%c", &zn);
		printf("%c ", zn);
	}
	printf("\n");
	fclose(fp);

	return 0;	
}
