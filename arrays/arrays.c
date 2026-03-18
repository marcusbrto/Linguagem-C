#include <stdio.h>

int main()
{
    float notas[1],media,soma = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("Digite %d nota do aluno: ",i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = (soma)/2;
    printf("%.2f",media);
}