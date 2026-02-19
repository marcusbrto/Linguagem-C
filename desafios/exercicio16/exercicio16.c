#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Numeros parede de 1 ate %d\n",numero);
    for (int i = 1; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

}