#include <stdio.h>
int main() {
    float salario1, salario2, diferenca;
    printf("Digite o salario do primeiro jogador: ");
    scanf("%f", &salario1);
    printf("Digite o salario do segundo jogador: ");
    scanf("%f", &salario2);
    diferenca = salario1 - salario2;
    printf("=====================\n");
    printf("A diferenca de salarios eh de %.2f",diferenca);
}