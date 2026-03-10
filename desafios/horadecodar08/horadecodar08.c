#include <stdio.h>

int main()
{
    int i, j;

    char letra;

    for(i=1; i<=10; i++)
    {
        letra = 'A';//QUANDO É UMA LETRA SÓ TEM QUE USAR ASPAS SIMPLES

        for(j=1; j<=i; j++)
        {
            printf(" %c",letra);
            letra;
        }
        printf("\n");
    }
    return 0;
}