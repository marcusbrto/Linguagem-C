#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    int caracter_errado = 0, tamanho;

    printf("Digite o seu nome de usuario: ");
    scanf("%s", nome);
    tamanho = strlen(nome);
    for (int i = tamanho; i >= 0; i--)
    {
        if (nome[i] == '@' || nome[i] == '#' || nome[i] == '$'
            || nome[i] == '%' || nome[i] == '!')
        {
            caracter_errado++;
        }
    }
    if (caracter_errado > 0)
    {
        printf("Foram encontrados %d caracteres invalidos",caracter_errado);
        printf("\nNome invalido!");
    }else
    {
        printf("Nome Valido!");
    }
}