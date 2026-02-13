#include <stdio.h>

int main()
{
    int dias;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    for (int i = 0; i < dias; i++)
    {
        printf("dia %d ta pago!\n",i + 1);
    }

    printf("\nTreinamento concluido!");

    return 0;
}