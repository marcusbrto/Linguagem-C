#include <stdio.h>

int main()
{
    int numero[10];

    for(int i=0;i<10;i++)
    {
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&numero[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(numero[i]%2==0)
        {
            printf("%d ",numero[i]);
        }
    }
}