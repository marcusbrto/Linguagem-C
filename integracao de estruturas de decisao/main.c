#include <stdio.h>

int main()
{
    int opcao;
    float nota1,nota2,media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao:");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
            printf("=== Calcular a media ===\n");
            printf("Digite a nota 1: ");
            scanf("%f",&nota1);
            printf("Digite a nota 2: ");
            scanf("%f",&nota2);

            if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
            {
                media=(nota1+nota2)/2;
                printf("Media: %.2f",media);
                if (media >= 7)
                {
                    printf("\nAprovado");
                }else if (media >= 5)
                {
                    printf("\nRecuperacao");
                }else
                {
                    printf("\nReprovado");
                }
            }else
            {
                printf("Digite uma nota VALIDA (1 a 10)!\n");
            }
            break;
        case 2:
            printf("=== Determinar Status ===\n");
            printf("Entrar com a media:");
            scanf("%f",&media);
            if (media >= 7)
            {
                printf("\nAprovado");
            }else if (media >= 5)
            {
                printf("\nRecuperacao");
            }else
            {
                printf("\nReprovado");
            }
        break;
        case 3:
            printf("Saindo do programa...");
        break;
        default:
            printf("Opcao invalida");
    }

}