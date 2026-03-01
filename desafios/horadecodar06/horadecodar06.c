#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerar numero aleatorio
    srand(time(NULL));
    numeroComputador = rand() % 100 + 1; //numero entre 1 e 100

    //Inicio do jogo
    printf("Bem vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Voce deve escolher um numero e o tipo de comparacao.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparacao: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu numero (entre 1 e 100):");
    scanf("%d", &numeroJogador);

    //Exibir o numero do computador
    printf("O numero do computador eh: %d\n",numeroComputador);

    switch (tipoComparacao)
    {
        case 'M':
    case 'm':
            printf("Voce escolheu a opcao MAIOR");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Voce escolheu a opcao MENOR");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Voce escolheu a opcao IGUAL");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;
        default:
        printf("Opcao invalida!\n");
    }
    if (resultado == 1)
    {
        printf("\nJOGADOR VENCEU!");
    }else
    {
        printf("\nCOMPUTADOR VENCEU!");
    }
}