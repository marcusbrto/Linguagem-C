#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 60)
    {
        printf("Voce eh um idoso");
    }else if (idade >= 18 && idade < 60)
    {
        printf("Voce eh adulto");
    }else
    {
        printf("Voce ainda é de menor");
    }
}