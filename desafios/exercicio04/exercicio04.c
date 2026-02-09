#include <stdio.h>

int main() {
    int vitorias,empates,derrotas,total;
    printf("Digite a quantidade de VITORIAS:");
    scanf("%d",&vitorias);
    printf("Digite a quantidade de empates:");
    scanf("%d",&empates);
    printf("Digite a quantidade de derrotas:");
    scanf("%d",&derrotas);
    vitorias = vitorias * 3;
    total = empates + vitorias;
    printf("=========================\n");
    printf("A quantidade total de pontos foi de %d \n",total);
}