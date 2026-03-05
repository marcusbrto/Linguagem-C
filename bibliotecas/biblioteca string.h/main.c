/* <string.h> - manipulação de strings
 *
 * strlen() - tamanho da string
 * strcpy() - copia uma string
 * strcmp() - compara strings
 * strcat() - concatena strings
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[] = "Joao";
    char sobrenome[] = " Silva";

    strcat(nome, sobrenome); //concatena
    printf("Nome completo: %s\n",nome);

    printf("Tamanho: %d \n",strlen(nome));

    if (strcmp(nome, "Joao Silva") == 0)
    {
        printf("Nome esta correto\n");
    }else
    {
        printf("Nome esta incorreto\n");
    }

    return 0;
}