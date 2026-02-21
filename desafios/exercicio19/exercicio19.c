#include <stdio.h>

int main()
{
    int numero, par = 2;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(int i=1; i<=numero; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d ", par);
			par += 2;
        }
        printf("\n");
    }
}