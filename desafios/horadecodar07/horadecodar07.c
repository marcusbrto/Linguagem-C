#include <stdio.h>

int main()
{
    /* Do While
    int numero;
    printf("\nDigite um numero par para encerrar o programa...");
    do
    {
        printf("\nDigite um valor:");
        scanf("%d",&numero);

        if (numero % 2 == 0)
        {
            printf("O numero %d eh par",numero);
        }else
        {
            printf("O numero %d eh impar",numero);
        }
    }while (numero % 2 != 0);

    printf("\nEncerrando o programa...");

    */

    //While

    int numero,i;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d",&numero);

    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",numero,i,numero*i);
    }

    return 0;
}