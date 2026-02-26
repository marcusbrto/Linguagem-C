#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroSorteado, jogadas, tentativas = 0;

    srand(time(NULL));

    numeroSorteado = (rand() % 10) + 1;

    do {
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &jogadas);
        tentativas++;
    } while (jogadas != numeroSorteado);

    printf("Voce acertou! foram apenas %d tentativas\n",tentativas);

    return 0;
}