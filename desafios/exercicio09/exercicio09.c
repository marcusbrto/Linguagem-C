#include <stdio.h>
int main() {
    int idade,gols;
    printf("Digite a idae do jogador: ");
    scanf("%d", &idade);
    printf("Digite a quantidade de gols do jogador: ");
    scanf("%d", &gols);
    if (idade <= 20 && gols <= 10) {
        printf("Jovem em desenvolvimento.");
    }else if (idade > 20 && gols > 15) {
        printf("Jovem experiente em grande fase!");
    }else if (idade > 20 && gols <= 15) {
        printf("Cara ruim");
    }else if (idade <= 20 && gols > 10) {
        printf("Jovem talento promissor!");
    }
}