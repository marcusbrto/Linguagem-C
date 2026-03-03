#include <stdio.h>

void classificarNota(float nota)
{
    if (nota >= 6)
    {
        printf("Aprovado");
    }else if (nota >= 4)
    {
        printf("Recuperacao");
    }else
    {
        printf("Reprovado");
    }
}

int main()
{
    float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    classificarNota(nota);
    printf("\nO valor de nota e %.2f", nota);
    return 0;
}