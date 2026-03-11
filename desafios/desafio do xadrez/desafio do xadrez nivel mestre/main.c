#include <stdio.h>

// Desafio de Xadrez - MateCheck - Nivel Mestre
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Move a torre para a direita usando recursividade
void moverTorre(int casas){
	if (casas > 0){
	printf("Direita\n");
	moverTorre(casas - 1);
}
}

// Move o bispo na diagonal (cima + direita)
// Utiliza recursividade combinada com loops aninhados
void moverBispo(int casas){
    if (casas > 0){
    //Loop externo movimento vertical(CIMA)
    for(int vertical = 0; vertical < 1; vertical++){
        printf("Cima\n");
        //Loop interno movimento horizontal(DIREITA)
        for(int horizontal = 0; horizontal < 1; horizontal++){
            printf("Direita\n");
    }
}
    moverBispo(casas - 1);
}
}

// Move a rainha para a esquerda usando recursividade
void moverRainha(int casas){
	if (casas > 0){
	printf("Esquerda\n");
	moverRainha(casas - 1);
}
}

// Movimento do cavalo em "L": duas casas para cima e uma para direita
// Implementado com loops aninhados
void moverCavalo(int casa_direita, int casa_cima){
	if (casa_direita > 0){
	for (int i = 0; i < casa_direita; i++) {
		for (int j = 0; j < casa_cima; j++) {
		printf("Cima\n");
		}
		printf("Direita\n");
	}
}
}
int main() {
    //Declaracao de variaveis
    int casas_torre = 5, casas_bispo = 5, casas_rainha = 8, casa_cavalo_direita = 1, casa_cavalo_cima = 2;

    //Mover a torre 5 casas para a direita
    printf("TORRE:\n");
    moverTorre(casas_torre);

	//Mover bispo 5 casas na diagonal
    printf("\nBispo\n");
    moverBispo(casas_bispo);

    //Mover rainha 8 casas para a esquerda
    printf("\nRainha\n");
    moverRainha(casas_rainha);

	//Mover cavalo 2 casas para cima e 1 para direita
	printf("\nCavalo\n");
	moverCavalo(casa_cavalo_direita,casa_cavalo_cima);

    return 0;
}


