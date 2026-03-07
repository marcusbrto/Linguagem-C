#include <stdio.h>
#include <stdlib.h>

int main()
{
    char idadeStr[10];
    int idade;

    printf("Digite sua idade: ");
    scanf("%s", idadeStr);
    idade = atoi(idadeStr);

    if (idade >= 18)
    {
        printf("Voce eh de maior");
    }else
    {
        printf("Voce eh de menor");
    }
}