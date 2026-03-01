#include <stdio.h>

int quadrado(char n)
{
    for (int i=1; i<=4; i++)
    {
        printf("%c", n);
        for (int j=1; j<=7; j++)
        {
            printf("%c", n);
        }
        printf("\n");
    }
}

int main()
{
    char caracter;
    printf("Digite um caractere(*, #, $ ...): ");
    scanf("%c", &caracter);

    quadrado(caracter);
}