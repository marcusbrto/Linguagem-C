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
    primeiro->proximo = NULL;

    // criando segundo nó
    struct No *segundo = (struct No *)malloc(sizeof(struct No));
    segundo->valor = 10;
    segundo->proximo = NULL;

    // ligando os nós
    primeiro->proximo = segundo;

    // prints
    printf("Primeiro: %d\n", primeiro->valor);
    printf("Segundo: %d\n", primeiro->proximo->valor);

    return 0;
}