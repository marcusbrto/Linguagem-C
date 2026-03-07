#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temStr[10];
    float temperatura;

    printf("Digite a temperatura em Celsius: ");
    scanf("%s", temStr);

    temperatura = atof(temStr);

    if (temperatura < 18)
    {
        printf("Ambiente frio\n");
    }else if (temperatura <= 26){
        printf("Ambiente agradavel\n");
    }else
    {
        printf("Ambiente quente\n");
    }
    return 0;
}