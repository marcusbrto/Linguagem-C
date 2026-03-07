#include <stdio.h>

// Desafio de Xadrez - MateCheck - Nivel Novato
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Declaracao de variaveis
    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8;
    int contador_bispo = 0, contador_rainha = 0;

    //Mover a torre 5 casas para a direita
    printf("TORRE:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    //Mover bispo 5 casas na diagonal
    printf("\nBispo\n");
    while (contador_bispo < casas_bispo){
    printf("Cima Direita\n");
        contador_bispo++;
    }

    //Mover rainha 8 casas para a esquerda
    printf("\nRainha\n");
    do{
        printf("Esquerda\n");
        contador_rainha++;
    }while (contador_rainha < casas_rainha);


    return 0;
}