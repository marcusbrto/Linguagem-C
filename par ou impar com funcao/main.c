#include <stdio.h>

int parImpar(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (parImpar(num))
    {
        printf("O NUMERO EH PAR");
    }else
    {
        printf("O NUMERO EH IMPAR");
    }


    return 0;
}