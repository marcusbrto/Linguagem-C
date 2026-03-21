#include <stdio.h>

int main()
{
    int matriz[4][4], soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite a matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == j)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("A soma da diagonal principal eh: %d", soma);
}