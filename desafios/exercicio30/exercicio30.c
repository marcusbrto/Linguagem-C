#include <stdio.h>

int media(float nota1, float nota2, float nota3)
{
    float media;
    media = (nota1 + nota2 + nota3)/3;
    if (media > 9)
    {
        printf("Excelente! Media %.2f",media);
    }else if (media >= 7 && media <= 9)
    {
        printf("Bom! Media %.2f",media);
    }else if (media >= 5 && media < 7)
    {
        printf("Regular! Media %.2f",media);
    }else
    {
        printf("Ruim! Media %.2f",media);
    }
}

int main()
{
    float nota1, nota2, nota3;
    for (int i = 1; i <= 5; i++)
    {
        printf("\n=========================\n");
        printf("JOGADOR %d\n",i);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media(nota1,nota2,nota3);
    }
}