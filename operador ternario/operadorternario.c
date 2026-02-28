#include <stdio.h>

int main()
{
    int idade = 16;
    int resultado;

    resultado = idade >= 18 ? 1 : 0;

    if (resultado == 1)
    {
        printf("Voce eh maior de idade!\n");
    }else
    {
        printf("Voce eh menor de idade!\n");
    }
}