#include <stdio.h>
int main()
{
    int recorde[5], maior = 0;

    for(int i=0; i<5; i++)
    {
        printf("Score %d: ",i + 1);
        scanf("%d",&recorde[i]);
        if (recorde[i] > maior && i > 0)
        {
            maior = recorde[i];
            printf("\nParabens! Score %d superou o recorde!\n",recorde[i]);
        }
    }
}