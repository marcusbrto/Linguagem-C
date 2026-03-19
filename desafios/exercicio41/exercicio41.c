#include <stdio.h>

int main()
{
    float notas[3][4];
    float media[3];

    for(int i = 0; i < 3; i++)
    {
        float soma = 0;//muito importante declarar essa variavel local para media nao pegar lixo da memoria
        for(int j = 0; j < 4; j++)
        {
            printf("Aluno %d, Prova %d: ",i+1,j+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        printf("\n");
        media[i] = soma / 4;
    }
    //Exibicao
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Aluno %d, Prova %d: %.2f\n",i+1,j+1,notas[i][j]);
        }
        printf("Media: %.2f\n\n", media[i]);
    }
}