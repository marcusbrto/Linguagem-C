#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opcao;
    int numeroSecreto, palpilte;

    printf("Menu Principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpilte);
        if (numeroSecreto == palpilte)
        {
            printf("Voce acertou\n");
            printf("Numero secreto: %d\n", numeroSecreto);
        }else
        {
            printf("Voce nao acertou\n");
            printf("Numero secreto: %d\n", numeroSecreto);
        }
            break;
        case 2:
            printf("As regras sao....");
            break;
        case 3:
            printf("Saindo do jogo");
            break;
        default:
            printf("Opcao invalida");
            break;
    }


}