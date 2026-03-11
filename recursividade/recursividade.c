#include <stdio.h>

//Funcao recursiva para imprimir numeros de n ate 1
void recursiveLoop(int n) {

    if (n > 0) {

        printf("%d \n", n); // Imprime o valor atual de n

        recursiveLoop(n - 1); // Chama a si mesma com n = 1

    }

}

int main() {

    int num = 10;//Poderia ter sido adicionado o numero direto na chamada mas como o certo é com funcao entao fiz assim
    printf("Contagem regressiva:\n");
    recursiveLoop(num);
    printf("BOOM!");

    return 0;
}