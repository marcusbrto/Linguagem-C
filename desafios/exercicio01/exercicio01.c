#include <stdio.h>

int main() {
    char nome[50];
    int idade,quantidade;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Quantidade de gols: ");
    scanf("%d", &quantidade);

    printf("=======================================");
    printf("\n");
    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Quantidade de gols: %d \n", quantidade);
}