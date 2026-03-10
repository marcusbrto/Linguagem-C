#include <stdio.h>

// Desafio de Xadrez - MateCheck - Nivel Novato
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Declaracao de variaveis
    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8, casas_cavalo_direita = 1, casas_cavalo_cima = 2;
    int contador_bispo = 0, contador_rainha = 0, opcao_cavalo_1, opcao_cavalo_2;

    //Mover a torre 5 casas para a direita
    printf("TORRE:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    //Mover bispo 5 casas na diagonal
    printf("\nBispo\n");
    while (contador_bispo < casas_bispo){
    printf("Cima\n");
	printf("Direita\n");
        contador_bispo++;
    }

    //Mover rainha 8 casas para a esquerda
    printf("\nRainha\n");
    do{
        printf("Esquerda\n");
        contador_rainha++;
    }while (contador_rainha < casas_rainha);

	//Mover cavalo 2 casas para cima e 1 para direita
	printf("\nCavalo\n");
	for (int i = 0; i < casas_cavalo_direita; i++) {
		for (int j = 0; j < casas_cavalo_cima; j++) {
		printf("Cima\n");
		}
		printf("Direita\n");
	}

    return 0;
}