#include <stdio.h>

int main()
{
    int numero, contador, soma;
    contador = 0;
    while (soma < 100)
    {
        printf("Quantas moedas voce recebeu (1 a 10): ");
        scanf("%d", &numero);
        contador++;
        if (numero > 10 || numero < 1)
        {
            printf("Digite um numero entre 1 e 10!\n");
        }else
        {
            soma += numero;
        }
    }
    printf("Voce juntou um total de %d moedas!\n",soma);
    printf("Foram necessarios %d tentativas",contador);
}