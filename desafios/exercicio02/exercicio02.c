#include <stdio.h>

int main() {
    int totgols,qntpartidas;
    float media;
    printf("Numero total de gols: ");
    scanf("%d",&totgols);
    printf("Quantidade de partidas: ");
    scanf("%d",&qntpartidas);
    media = (float)totgols/qntpartidas;
    printf("==================================\n");
    printf("Media de gols por partida %f",media);
}