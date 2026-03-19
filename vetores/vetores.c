#include <stdio.h>

int main()
{
    float notas[3],media = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    media = (notas[0] + notas[1] + notas[2]) / 3;
    printf("Media: %.2f", media);
}