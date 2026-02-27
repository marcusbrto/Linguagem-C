#include <stdio.h>
int main()
{
    int moedas, rodadas = 0, total = 0;

    while (total < 100)
    {
        printf("Digite a quantidade de moedas colocadas nessa rodada: ");
        scanf("%d", &moedas);

        total += moedas;
        rodadas++;
    }
    printf("Meta atingida em %d rodadas!",rodadas);

    return 0;
}