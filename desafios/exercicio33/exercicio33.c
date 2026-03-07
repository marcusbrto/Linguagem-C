#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char temperatura[10];
    float temperatura_convertida;

    printf("Digite a temperatura em Celcius: ");
    scanf("%s", temperatura);
    temperatura_convertida = atof(temperatura);
    if (temperatura_convertida < 18)
    {
        printf("Esta frio!");
    }else if (temperatura_convertida >= 18 && temperatura_convertida <= 26)
    {
        printf("Esta agradavel!");
    }else
    {
        printf("Esta quente!");
    }
}