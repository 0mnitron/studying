#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	char ime[15], prezime[15];
	int i,n;

	fp = fopen("ucenici.txt","w");
	if(fp == NULL){
		printf("\nGreska pri otvaranju datoteke.");
		exit(1);
	}

	printf("\nKoliko je ucenika? ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		printf("\nUpisi ime i prezime ucenika: ");
		scanf("%s %s",ime, prezime);
		fprintf(fp, "\n%s %s", ime, prezime);
	}
	fclose(fp);
	
	fp = fopen("ucenici.txt","r");
	if(fp == NULL){
		printf("\nGreska pri otvaranju datoteke.");
		exit(1);
	}
	printf("\nU datoteku je upisano:\n");
	for(i=0; i<n; i++){
		fscanf(fp, "%s %s", ime, prezime);
		printf("\n%s %s",ime, prezime);
	}
	printf("\n");
	fclose(fp);
	
	return 0;
}
