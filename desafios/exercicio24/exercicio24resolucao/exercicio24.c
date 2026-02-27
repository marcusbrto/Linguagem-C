#include <stdio.h>

int main()
{
    int palpite;

    do
    {
        printf("Adivinhe o numero (de 1 a 10): ");
        scanf("%d", &palpite);
    }while (palpite != 7);
    printf("Voce acertou!");
}