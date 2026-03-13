#include <stdio.h>

int main()
{
    int ataque[4],maior = 0;

    for(int i=0;i<4;i++)
    {
        printf("Digite a ataque[%d]: ",i+1);
        scanf("%d",&ataque[i]);
        if(ataque[i]>maior)
        {
            maior = ataque[i];
        }
    }
    printf("Maior dano causado: %d",maior);
}