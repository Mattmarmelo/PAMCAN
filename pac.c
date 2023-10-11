#include <stdio.h>

int main(){
	char m[5][10+1];
	FILE* arq;
    arq = fopen("mapa.txt", "r");
    
	if (arq == 0){
    	printf("Erro na leitura de arquivo");
	}
	for (int i = 0; i < 5; i++) {
		fscanf(arq, "%s", m[i]);
	}
	for(int i = 0; 1 < 5; i++) {
		printf("%s\n", m[i]);
	}
	fclose(arq);
}	
