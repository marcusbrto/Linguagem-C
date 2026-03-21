#include <stdio.h>

int main()
{
    int matriz[3][2], transposta[2][3], numeros;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &numeros);
            matriz[i][j] = numeros;
            transposta[j][i] = numeros;
        }
    }
    printf("\nMatriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposta:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d", transposta[i][j]);
        }
        printf("\n");
    }

}