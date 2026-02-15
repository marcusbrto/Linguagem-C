#include <stdio.h>

int main()
{
    int opcao;
    float nota1,nota2,media,frequencia;
    printf("========================");
    printf("\nMenu:");
    printf("\n1. Verificar se o aluno foi aprovado.");
    printf("\n2. Sair.");
    printf("\n========================");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
        printf("\n Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("\n Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("\n Qual a frenquencia em %%: ");
        scanf("%f", &frequencia);
        media = (nota1 + nota2)/2;
        if (frequencia >= 75 && media >= 7)
        {
            printf("\n O aluno foi aprovado.");
            break;
        }
        else if (frequencia >= 75 && media >= 5){
            printf("\n O aluno em recuperacao.");
            break;
        }
        else
        {
            printf("\n O aluno foi reprovado.");
            break;
        }
    case 2:
        printf("\n Programa Encerrado!");
        break;
    default:
        printf("\n Opcao invalida!");
    }
}
