#include <stdio.h>

float media(float *notas, int tamanho)
{
    float soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += notas[i];
    }

    return soma / tamanho;
}

int main()
{

    int qnt;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &qnt);

    float notas[qnt];

    for (int i = 0; i < qnt; i++)
    {
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("Media: %.2f\n", media(notas, qnt));

    return 0;
}