#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};

int main(){
    struct Pessoa pessoas[3];
    int maisVelha = 0;
    // struct Pessoa *ponteiro = &pessoas[3];

    for (int i = 0; i < 3;i++){
        printf("PESSOA %d:\n", i + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", pessoas[i].nome);
        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Digite a altura: ");
        scanf("%f", &pessoas[i].altura);
        printf("\n");

        if (pessoas[i].idade > pessoas[maisVelha].idade)
        {
            maisVelha = i;
        }
    }
    printf("Pessoa mais velha: %s\n", pessoas[maisVelha].nome);
    printf("Idade: %d\n", pessoas[maisVelha].idade);
    printf("Altura: %.2f\n", pessoas[maisVelha].altura);

    return 0;
}