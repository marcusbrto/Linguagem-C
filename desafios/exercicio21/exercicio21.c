#include <stdio.h>
int main()
{
    int quantidadeTotal;

    printf("Quantos carros serao registrados? ");
    scanf("%d", &quantidadeTotal);

    for (int i = 0; i < quantidadeTotal; i++)
    {
        char modelo[50];
        int anoFabricacao,funciona;

        printf("\nCarro %d:\n",i+1);
        printf("Digite o modelo do carro: ");
        scanf("%s", modelo);
        printf("Ano de fabricacao: ");
        scanf("%d", &anoFabricacao);
        printf("Esta funcionando normalmente(1 ou 0): ");
        scanf("%d", &funciona);

        if (anoFabricacao < 2005 && funciona == 0)
        {
            printf("O carro %s precisa de REPAROS URGENTES!\n",modelo);
        }else if (anoFabricacao < 2005 && funciona == 1)
        {
            printf("O carro %s eh antigo, recomenda-se uma revisao!\n",modelo);
        }else if (anoFabricacao >= 2005 && funciona == 0)
        {
            printf("O carro %s precisa de manutencao!\n",modelo);
        }else if (anoFabricacao >= 2005 && funciona == 1)
        {
            printf("O carro %s esta em boas condicoes!\n",modelo);
        }
    }
}