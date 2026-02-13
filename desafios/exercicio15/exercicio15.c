#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);
    for (int c = 1; c <= 10; c++)
    {
        printf("%d x %d = %d\n",numero,c,numero * c);
    }
    return 0;
}