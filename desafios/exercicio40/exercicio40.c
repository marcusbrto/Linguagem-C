#include <stdio.h>

int main()
{
    int matriz[2][3], soma = 0;

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Valor arrecadado na Agencia %d, Dia %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    // Total
    printf("\nTotais:\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Agencia %d, Dia %d: %d \n", i+1, j+1, matriz[i][j]);
        }
    }
    printf("\nSoma total: R$%d", soma);
}