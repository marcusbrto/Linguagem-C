#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(int i=1; i<=numero; i++)
    {
        for (int j=1; j<= numero - i; j++)
        {
            printf(" ");
        }
        for (int j=1; j<= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}