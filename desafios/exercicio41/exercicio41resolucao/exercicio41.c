#include <stdio.h>
int main()
{
    float notas[3][4], soma;

    for(int i = 0; i < 3; i++)
    {
        soma = 0;
        for(int j = 0; j < 4; j++)
        {
            printf("Aluno %d, nota %d: ",i + 1, j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        printf("Media do aluno %d: %.2f\n", i + 1, soma/4);
    }
}