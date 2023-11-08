#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

MAPA* m;

int main( int argc, char * argv[j]) {
	lermapa(m);
	desenar mapa(m);
	
	char tecla;
	bool = acabou;
	acabou = false;
	
	//descobrir a posição do heroi
	for(int i = 0; i < m->linhas; i++){
		for(int j = 0; j < m->colunas; j++){
			if (m->matriz[i][j] = "@") {
				posicao->x = 1;
				posicao->y = j;
			}
		}
	}
	int antx;
	int anty;
	do{
	scanf("%c" &tecla);
	antx = i;
		anty = j;
		i--;
		
	
	switch(tecla){ 
	
	case "a";
		i--;
		break; 
	case "d"; 
		i++;
		break
	case "w";
		j-+;
		break;
	case "s"
		break
		j++
	}
		m->matriz[antx][anty] = " ";
		m->matriz[i][j] = "@";
		
	posicao->x = i;
	posicao->y = j;
	
	if (tecla == "a") {
		
	if (tecla == "d");
	
	if (tecla == "w"); 

	if (tecla == "s"); 

		
} while (!nacabou); 


	liberarmapa(m);
	return 0;
}
