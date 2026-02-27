#include <stdio.h>

int contadorVogal (char *palavra)
{
    int cont = 0;

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            cont++;
        }
    }
    return cont;
}

int main()
{
    char palavra[50];

    printf("Digite apenas uma palavra: ");
    scanf("%s", palavra);
    printf("A quantidade de vogais na palavra %s eh de %d",palavra,contadorVogal(palavra));
}