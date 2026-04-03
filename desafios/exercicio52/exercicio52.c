#include <stdio.h>
#include <stdlib.h>

struct No
{
    int valor;
    struct No *proximo;
};

int main(){
    struct No *primeiro = (struct No*) malloc(sizeof(struct No));

    primeiro->valor = 42;
    primeiro->proximo = NULL;

    printf("Valor do no: %d\n", primeiro->valor);
    printf("Valor do PROXIMO no: %s\n", primeiro->proximo);
}