#define MAX 4
#include<stdbool.h>

typedef struct  fila Fila;

Fila* criaFila();

int getInicio(Fila *f);
int getFim(Fila *f);
void setInicio(Fila *f, int x);
void setFim(Fila *f,int x);
void liberaFila(Fila* f);
bool estahVazia(Fila* f);
bool estahCheia(Fila* f);
void enfileirar(Fila* f, int valor);
void desenfileirar(Fila* f, int* valor);
