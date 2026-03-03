#include <stdio.h>

void quadrado(int num, char ctr)
{
    for (int i=0; i < num; i++)//linhas
    {
        for (int j=0; j < num; j++)//colunas
        {
            printf("%c ", ctr);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    char caracter;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &n);

    printf("Digite um caractere(*, #, $ ...): ");
    scanf(" %c", &caracter);

    quadrado(n,caracter);
}