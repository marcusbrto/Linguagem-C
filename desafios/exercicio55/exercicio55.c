#include <stdio.h>
#include <stdlib.h>

struct No
{
    int valor;
    struct No *proximo;
};

int main()
{
    struct No *primeiro = (struct No *)malloc(sizeof(struct No));
    primeiro->valor = 42;

    struct No *segundo = (struct No *)malloc(sizeof(struct No));
    segundo->valor = 99;

    struct No *terceiro = (struct No *)malloc(sizeof(struct No));
    terceiro->valor = 7;
    terceiro->proximo = NULL;

    primeiro->proximo = segundo;
    segundo->proximo = terceiro;

    printf("Primeiro: %d\n", primeiro->valor);
    printf("Segundo: %d\n", primeiro->proximo->valor);
    printf("Terceiro: %d\n", primeiro->proximo->proximo->valor);

    return 0;
}