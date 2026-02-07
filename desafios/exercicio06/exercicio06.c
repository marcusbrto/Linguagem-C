#include <stdio.h>

int main() {
    int amarelo;
    printf("Digite a quantidade de cartao amarelos: ");
    scanf("%d", &amarelo);
    if (amarelo >= 2) {
        printf("JOGADOR EXPULSO");
    }
    else {
        printf("JOGADOR OK");
    }
}