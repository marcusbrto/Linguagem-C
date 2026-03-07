#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero;
    srand(time(NULL));

    printf("Numeros sorteados: \n");

    for (int i = 0; i < 6; i++)
    {
        numero = rand() % 60 + 1;
        printf("%d ", numero);
    }

    return 0;
}