#include <stdio.h>

int main()
{
    int dano[4], maior = 0;

    for(int i = 0; i < 4; i++)
    {
        printf("Digite o valor do dano %d: ", i + 1);
        scanf("%d", &dano[i]);

        if(dano[i] > maior)
        {
            maior = dano[i];
        }
    }
    printf("\nMaior dano: %d", maior);
}