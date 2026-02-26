#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(int i=numero; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}