#include <stdio.h>
#include <string.h>
int main(){
  char rec[100], slovo;
	int bs[20], poc[20], i, n, brslova=0, rijec=0, ima=0;
	int max=0;

	printf("\nUpisi recenicu:");
	gets(rec);
	n = strlen(rec);

  printf("\nUpisi slovo: ");
  scanf(" %c", &slovo);

	poc[0] = 0;
	for(i=0; i<n; i++){
		if(rec[i] != ' '){
			brslova++;
    }else{
			poc[rijec + 1] = i + 1;
			bs[rijec] = brslova;
			rijec++;
			brslova = 0;
		}
	}
	poc[rijec + 1] = i + 1;
	bs[rijec] = brslova;

	for(i=1; i<=rijec; i++){
		if(bs[i] > bs[max]){
			max = i;
    }
	}

	for(i=poc[max]; i<poc[max] + bs[max]; i++){
    if(rec[i] == slovo){
      ima = 1;
      break;
    }
  }

  if(ima == 1){
    printf("\nTrazeno slovo se pojavljuje u najduzoj rijeci.");
  }else{
    printf("\nTrazeno slovo se ne pojavljuje u najduzoj rijeci.");
  }
	return 0;
}
