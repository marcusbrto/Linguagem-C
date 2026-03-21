#include <stdio.h>

int main()
{
    int matriz[4][4];
    int identidade = 1; // assume que é identidade

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite 0 ou 1 [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] != 0 && matriz[i][j] != 1)
            {
                printf("Erro! Numero INVALIDO em [%d][%d]\n", i, j);
                return 0;
            }

            if (i == j)
            {
                if (matriz[i][j] != 1)
                {
                    identidade = 0;
                }
            }
            else
            {
                if (matriz[i][j] != 0)
                {
                    identidade = 0;
                }
            }
        }
    }

    if (identidade)
        printf("\nMatriz identidade? SIM\n");
    else
        printf("\nMatriz identidade? NAO\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}