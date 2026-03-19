#include <stdio.h>

int main()
{
    int scores[5], recorde = 5000;

    printf("Recorde atual: %d \n",recorde);
    printf("Digite os 5 scores do jogador:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Score %d: ",i + 1);
        scanf("%d", &scores[i]);

        if(scores[i] > recorde)
        {
            recorde = scores[i];
            printf("Parabens! Score %d superou o recorde! \n", scores[i]);
        }
    }
}