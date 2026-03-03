#include <stdio.h>

float calcularMedia(float n1, float n2, float n3)
{
    return(n1+n2+n3)/3;
}

void classificar (float media)
{
    if (media >= 9)
    {
        printf("Excelente\n");
    }else if (media >= 7)
    {
        printf("Aprovado\n");
    }else if (media >= 5)
    {
        printf("Recuperacao\n");
    }else
    {
        printf("Reprovado\n");
    }
}
int main()
{
    float nota1, nota2, nota3,media;

    for (int i = 1; i <= 5; i++)
    {
        printf("Jogador %d\n\n",i);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media = calcularMedia(nota1, nota2, nota3);
        printf("Media: %.2f\n",media);

        classificar(media);
        printf("=========================\n");
    }
}