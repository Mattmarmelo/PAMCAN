#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

MAPA* m;

int main(int argc, char *argv[]) {
	FILE* arq;
	arq = fopen("mapa1.txt", "r");
	if (arq == 0){
		printf("Erro na leitura de arquivo");
		exit(1);
	}
	fscanf(arq, "%d %d", &(m->linhas), &m->colunas));
	
	m->matriz = malloc(sizeof(char*) * m->linhas);
	
	for(int i = 0; i <m->linhas; i++) {
		m->matriz[i] = malloc(sizeof(char) * m->colunas +i)
	}
	
	for (int i = 0; i < m->linhas; i++) {
		for(int j = 0; j < m->colunas; j++) {
			printf("%s\n", m->matriz[i][j]);
		}
	}
	
	fclose(arq);
	return 0;
}

