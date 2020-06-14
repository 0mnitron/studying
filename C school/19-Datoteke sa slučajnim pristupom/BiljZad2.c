#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int br;
	FILE *fp;
	int i,n;

	fp = fopen("proba.txt", "w+");
	if(fp == NULL){
	printf("\nGreska kod otvaranja datoteke.");
	exit(1);
	}
	for(i=0; i<5; i++){
		printf("\nUpisi %d. broj: ",i+1);
		scanf("%d", &br);
		fwrite(&br, sizeof(br), 1, fp);
	}
	fseek(fp, 0, 2);
	n = ftell(fp);
	for(i=1; i<=n/4; i++){
		fseek(fp, -i*sizeof(br), SEEK_END);
		fread(&br, sizeof(br), 1, fp);
		printf("%d ", br);
	}
	fclose(fp);

	return 0;
}
