#define VAZIO    "." 
#define PAREDE_V "|"
#define PAREDE_H "-"
#define HEROI    "@"
#define FANTASMA "F"
#define PILULA   "P"
#define ESQ 'a'
#define DIR 'd'
#define CIMA 'w'
#define BAIXO 's'
struct mapa {
	char** matriz;
	int linhas;
	int colunas;
};

typedef struct mapa MAPA;

void lerMapa(MAPA* m);
void alocarmapa(mapa* m)

