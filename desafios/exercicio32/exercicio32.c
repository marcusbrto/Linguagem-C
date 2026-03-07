#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char idade[10];
    int idade_convertida;

    printf("Digite sua idade: ");
    scanf("%s", idade);
    idade_convertida = atoi(idade);
    if (idade_convertida >= 18)
    {
        printf("Maior de idade!");
    }else
    {
        printf("Menor de idade!");
    }
}