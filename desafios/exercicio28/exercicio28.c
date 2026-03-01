#include <stdio.h>

int media(float nota1, float nota2)
{
    float media;
    media = (nota1 + nota2)/2;

    if (media >= 6)
    {
        printf("Media %.2f! Aprovado",media);
    }else if (media >= 4 && media < 6)
    {
        printf("Media %.2f! Recuperacao",media);
    }else
    {
        printf("Media %.2f! Reprovado",media);
    }
}

int main()
{
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media(nota1, nota2);
}