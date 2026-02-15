#include <stdio.h>

int main()
{
    int numero;

    printf("1. Hamburguer");
    printf("\n2. Cachorro-quente");
    printf("\n3. Pizza");
    printf("\n4. Sair");
    printf("\nDigite o numero da opcao: ");
    scanf("%d", &numero);

    switch(numero)
    {
        case 1:
            printf("Seu pedido de hamburguer ficara pronto em 15 minutos!");
        break;
        case 2:
            printf("Seu pedido de Cachorro-quente ficara pronto em 5 minutos!");
            break;
        case 3:
            printf("Seu pedido de Pizza ficara pronto em 30 minutos!");
            break;
        case 4:
        printf("O programa esta encerrando...");
            break;
        default:
            printf("Opcao invalida!");
    }
}