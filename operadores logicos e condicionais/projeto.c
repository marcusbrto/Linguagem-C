#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    // = -> atribuição
    // == -> igualdade
    // > -> maior
    // < -> menor
    // >= maior ou igual
    // <= menor ou igual
    // != -> diferente
    // && -> AND/E, em logica é aquele que os dois precisa ser verdadeiro
    // || -> OR = OU, um dos dois precisa ser verdadeiro
        {
        printf("Maior de idade!\n");
    }
    else {
        printf("Menor de idade!\n");
    }

    return 0;
}