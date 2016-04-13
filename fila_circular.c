#include "Fila.h"
#include<stdbool.h>
typedef struct  fila{
   int inicio;
   int fim;
   int vetor[MAX];
};

Fila* criaFila() {
     Fila* f = (Fila*) malloc(sizeof(Fila));

     setInicio(f,0);
     setFim(f,0);
     return f;
}
void liberaFila(Fila* f) {
      free(f);

}
bool estahVazia(Fila* f) {
    return(f->inicio == 0);
}

bool estahCheia(Fila* f) {
    return (f->fim == MAX);
}

void enfileirar(Fila* f, int valor) {
      if ( !estahCheia(f) ) {

             f->vetor[f->fim] = valor;
             f->fim++;

            if( f->fim == MAX ){
                f->fim = 0;
            }

       }

}

void desenfileirar(Fila* f, int  *valor) {

      if ( !estahVazia(f) ) {
            *valor = f->vetor[f->inicio];  //* mostar o valor da variaveiss
                f->inicio++;

            if( f->inicio == MAX ){
                f->inicio = 0 ;
            }
    }
}

void setInicio(Fila *f,int x){
    f->inicio=x;
}

void setFim(Fila *f,int x){
    f->fim=x;
}

int getInicio(Fila *f){
    return f->inicio;
}
int getFim(Fila *f){
    f->fim;
}

void imprimiFila(Fila *f){
    int x = getInicio(f);
    int i = 0;

   for( i ; i < MAX; i++ ){

        if(x == MAX){
            x=0;
        }
        printf("%d  ", f->vetor[x]);
        x++;
    }
     printf("\n\n");

}
