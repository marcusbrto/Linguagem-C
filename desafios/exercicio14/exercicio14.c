#include <stdio.h>

int main()
{
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
		soma += i;
        printf("%d", i);

        if (i < num)
        {
            printf(" + ");
        }
		else{
			printf(" = ");
		}
    }

    printf("%d", soma);

    return 0;
}
