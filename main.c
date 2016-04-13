#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"fila_circular.c"


int main(){

    int x;

    Fila *f = criaFila();

    enfileirar(f,1);
    enfileirar(f,2);
    enfileirar(f,3);
    enfileirar(f,4);
    enfileirar(f,5);

    imprimiFila(f);


    desenfileirar(f,&x);

    imprimiFila(f);

    printf("%d",x);


return 0;
}


