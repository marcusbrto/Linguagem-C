#include <stdio.h>

int main()
{
    float nota1, nota2,nota3, media;

    printf("==== SISTEMA DE NOTAS ==== \n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media do aluno eh %.2f",media);

    return 0;
}