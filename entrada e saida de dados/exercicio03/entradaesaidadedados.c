#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[30];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Nome: %s\n", nome);

    return 0;
}