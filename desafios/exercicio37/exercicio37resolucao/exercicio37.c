#include <stdio.h>
int main()
{
    int numeros[10],pares[10], j = 0;

    for (int i=0;i<10;i++)
    {
        printf("Digite um numero %d: ",i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            pares[j] = numeros[i];
            j++;
        }
    }
    printf("\033[32m== Numeros pares: ==\033[m\n");
    for (int i=0;i<j;i++)
    {
        printf("O numero par %d: %d\n",i + 1, pares[i]);
    }
    return 0;
}