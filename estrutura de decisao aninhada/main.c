#include <stdio.h>

int main()
{
    int idade;
    float salario;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    // Primeiro critério: idade
    if (idade <= 18 || idade >= 60)
    {
        // Segundo critério: salario
        if (salario < 2000)
        {
            printf("Voce tem direito ao desconto\n");
        }
        else
        {
            printf("Voce nao tem direito ao desconto devido a renda\n");
        }
    }
    else
    {
        printf("Voce nao tem direito ao desconto devido a idade\n");
    }

    return 0;
}