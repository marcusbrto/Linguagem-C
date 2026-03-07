#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));//garante que vai gerar um numero aleatorio sempre

    for (int i = 1; i <= 6; i++)
    {
        int num = rand() % 60 + 1; // gera um numero aleatorio entre 1 e 60
        printf(" %d",num);
    }
    return 0;
}