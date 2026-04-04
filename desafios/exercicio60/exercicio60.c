#include <stdio.h>

union Valor{
    int i;
    float f;
    char c;
};

int main(){

    union Valor v;
    int opcao;

    printf("Digite o tipo do valor (1=int, 2=float, 3=char): ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite um inteiro: ");
            scanf("%d", &v.i);
            printf("Valor armazenado: %d\n", v.i);
            break;

        case 2:
            printf("Digite um flutuante: ");
            scanf("%f", &v.f);
            printf("Valor armazenado: %.2f\n", v.f);
            break;

        case 3:
            printf("Digite uma letra: ");
            scanf(" %c", &v.c);
            printf("Valor armazenado: %c\n", v.i);
            break;
        
        default:
            printf("Opcao invalida!\n");
        }
    return 0;
}