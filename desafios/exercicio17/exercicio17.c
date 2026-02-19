#include <stdio.h>

int main()
{
    int numero, cont;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(int i=1; i<=numero; i++)
    {
        printf("%d\n ", i);
        if (i<numero){
            for(int j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        }
    }
}