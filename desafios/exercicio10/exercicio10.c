#include <stdio.h>

int main() {
    int capestadio,qntpessoas,taxa;
    printf("Qual a capacidade total do estadio? ");
    scanf("%d",&capestadio);
    printf("Qual a quantidade de torcedores presente no jogo? ");
    scanf("%d",&qntpessoas);
    taxa = ((float)qntpessoas/capestadio)*100;
    if (taxa > 90) {
        printf("Lotado!");
    }else if (taxa >= 70) {
        printf("Otima presenca de publico!");
    }else if (taxa >= 50 && taxa <= 70) {
        printf("Publico razoavel!");
    }else {
        printf("Morumbis!");
    }
    printf("\nLotacao: %d%%",taxa);

}