#include <stdio.h>  // permite usar printf e scanf
#include <stdlib.h> // permite usar malloc

struct No
{
    int valor;          // guarda o número do nó
    struct No *proximo; // ponteiro para o próximo nó
};

int main()
{
    int tamanhoLista; // quantidade de nós que o usuário quer

    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanhoLista); // lê o tamanho

    if (tamanhoLista <= 0)
    { // verifica se é inválido
        printf("Valor invalido!\n");
        return 1; // encerra o programa
    }

    struct No *primeiro = NULL; // início da lista (vazio)
    struct No *ultimo = NULL;   // último nó (vazio)

    for (int i = 0; i < tamanhoLista; i++) // repete N vezes
    {
        struct No *novo = (struct No *)malloc(sizeof(struct No)); // cria novo nó

        printf("Digite o valor do No %d: ", i + 1);
        scanf("%d", &novo->valor); // coloca valor no nó

        novo->proximo = NULL; // ainda não aponta pra ninguém

        if (primeiro == NULL)
        {                    // se a lista está vazia (primeiro nó)
            primeiro = novo; // novo vira o primeiro
            ultimo = novo;   // novo também é o último
        }
        else
        {                           // se já existe nó na lista
            ultimo->proximo = novo; // o último aponta para o novo
            ultimo = novo;          // atualiza o último
        }
    }

    printf("Valores da lista: ");

    struct No *temp = primeiro; // começa do início

    while (temp != NULL)
    {                               // enquanto não chegar no final
        printf("%d ", temp->valor); // imprime valor atual
        temp = temp->proximo;       // vai para o próximo nó
    }
    //limpar memoria
    temp = primeiro;
    while(temp != NULL){
        {
            struct No *proximo = temp->proximo;
            free(temp);
            temp = proximo;
        };
        }

    return 0; // fim do programa
}