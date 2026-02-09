#include <stdio.h>
#include <math.h> //usando somente para deixar o valor absoluto sem o sinal

int main() {
    float salario1, salario2, diferenca;
    printf("Digite o salario do primeiro jogador: ");
    scanf("%f", &salario1);
    printf("Digite o salario do segundo jogador: ");
    scanf("%f", &salario2);
    diferenca = fabs(salario1 - salario2);//fabs é float absolute, ai não aparece o sinal
    printf("=====================\n");
    printf("A diferenca de salarios eh de %.2f",diferenca);
}