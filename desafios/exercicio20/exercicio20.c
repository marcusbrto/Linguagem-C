#include <stdio.h>

int main()
{
    int totalProdutos;

    printf("Quantos produtos serao cadastrados? ");
    scanf("%d", &totalProdutos);
    for (int i = 1; i <= totalProdutos; i++)
    {
        int estoque,estoqueMinimo;
        char nome[50];

        printf("=======================================\n");
        printf("Produto %d: \n", i);
        printf("=======================================\n");
        printf("Insira o nome do produto: ");
        scanf("%s", &nome);
        printf("Insira o estoque: ");
        scanf("%d", &estoque);
        printf("Insira o estoque minimo recomendado: ");
        scanf("%d", &estoqueMinimo);
        printf("=======================================\n");

        if (estoque < estoqueMinimo)
        {
            printf("-> O produto %s precisa ser reposto!\n (Estoque: %d, Minimo: %d)\n",nome,estoque,estoqueMinimo);
        }else
        {
            printf("-> O produto %s tem estoque suficiente.\n (Estoque: %d, Minimo: %d)\n",nome,estoque,estoqueMinimo);
        }
    }
}