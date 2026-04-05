#include <stdio.h>

int fatorial(int n)
{
    // caso base (n = 1 || n = 0)
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main()
{
    int opcao;
    printf("Qual fatorial deseja calcular? ");
    scanf("%d", &opcao);
    int resultado = fatorial(opcao);

    printf("%d! = %d\n", opcao, resultado);

    return 0;
}