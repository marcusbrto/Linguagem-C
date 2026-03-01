#include <stdio.h>

int maiorNumero(int numero1, int numero2, int numero3)
{
    int numeroMaior = 0;

    if (numero1 > numero2)
    {
        numeroMaior = numero1;
    }else if (numero2 > numero3)
    {
        numeroMaior = numero2;
    }else if (numero3 > numero1)
    {
        numeroMaior = numero3;
    }

    return numeroMaior;
}
int main()
{
    int numero1, numero2, numero3;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    printf("O maior numero foi %d",maiorNumero(numero1, numero2, numero3));

}