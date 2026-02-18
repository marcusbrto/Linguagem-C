#include <stdio.h>

int main()
{
    int numeroNormal = 2147483647;
    long int numeroGrande = 2147483647;

    printf("Numero normal: %d\n", numeroNormal);
    printf("Numero grande: %ld\n", numeroGrande);

    numeroGrande = 2147483648;
    printf("Numero grande atualizado: %ld\n",numeroGrande);
    return 0;
}