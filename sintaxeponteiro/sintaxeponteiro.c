#include <stdio.h>

int main()
{
    int numero = 10;
    int *n = &numero;

    printf("Antes: %d\n", numero);

    *n = 42;

    printf("Depois: %d\n", numero);

    return 0;
}